/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:19:22 by taichika          #+#    #+#             */
/*   Updated: 2021/05/04 09:19:36 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		s_len;
	int					i;
	char				*ans;

	i = 0;
	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start)
	{
		ans = malloc(1);
		return (ans);
	}
	ans = (char *)malloc(ft_min(s_len - start, len) + 1);
	if (ans == NULL)
		return (NULL);
	while (s[i + start] != '\0' && (size_t)i < len)
	{
		ans[i] = s[i + start];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
