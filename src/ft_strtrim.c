/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:25:45 by taichika          #+#    #+#             */
/*   Updated: 2021/05/01 16:14:02 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strndup(char *src, int n)
{
	char	*dest;
	char	*output;
	int		i;

	i = 0;
	dest = (char*)malloc(sizeof(char) * n + 1);
	if (dest == NULL)
		return (NULL);
	output = dest;
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (output);
}

char	*ft_strsetcmp(char *s1, char const *set)
{
	int set_len;
	int i;
	int	flag;

	i = 0;
	set_len = ft_strlen(set);
	flag = 0;
	while (*s1 != '\0' && flag != 1)
	{
		i = 0;
		while (i < set_len)
		{
			if (*s1 == set[i])
			{
				s1++;
				break ;
			}
			i++;
			if (i == set_len)
				flag = 1;
		}
	}
	return (s1);
}

char	*ft_strsetcmp_r(char const *s1, char const *set)
{
	int		set_len;
	int		i;
	int		flag;
	int		s1_len;
	char	*s1_t;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	flag = 0;
	s1_t = (char *)s1 + s1_len - 1;
	while ((s1 - 1) != s1_t && flag != 1)
	{
		i = 0;
		while (i < set_len)
		{
			if (*s1_t == set[i++])
			{
				s1_t--;
				break ;
			}
			if (i == set_len)
				flag = 1;
		}
	}
	return (s1_t);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*head;
	char	*tail;
	char	*ans;
	int		set_len;
	int		s1_len;

	if (s1 == NULL)
		return (NULL);
	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	head = ft_strsetcmp((char *)s1, set);
	tail = ft_strsetcmp_r(s1, set);
	if (head > tail)
	{
		ans = malloc(1);
		*ans = '\0';
		return (ans);
	}
	ans = ft_strndup(head, tail - head + 1);
	return (ans);
}
