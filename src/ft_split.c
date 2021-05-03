/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:24:08 by taichika          #+#    #+#             */
/*   Updated: 2021/05/03 12:46:43 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*pass_charset(char *str, char c)
{
	if (*str == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str != c)
			break ;
		str++;
	}
	return (str);
}

char	*pass_nocharset(char *str, char c)
{
	if (*str == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (str);
}

int		count_charset(char *str, char c)
{
	int cnt;

	cnt = 0;
	while (*str != '\0'
		&& *(pass_charset(str, c)) != '\0')
	{
		str = pass_charset(str, c);
		str = pass_nocharset(str, c);
		cnt++;
	}
	return (cnt);
}

void	write_split(char **ans, int ans_len, char const *str, char c)
{
	char	*head;
	char	*tail;
	int		i;

	i = 0;
	head = pass_charset((char*)str, c);
	while (i < ans_len)
	{
		tail = pass_nocharset(head, c);
		ans[i++] = ft_strndup(head, tail - head);
		head = pass_charset(tail, c);
	}
	ans[i] = NULL;
}

char	**ft_split(char const *str, char c)
{
	char	**ans;
	int		ans_len;

	if (str == NULL)
		return (NULL);
	ans_len = count_charset((char*)str, c);
	if (ans_len == 0)
	{
		ans = (char**)malloc(sizeof(char*) * 1);
		ans[0] = (void *)0;
		return (ans);
	}
	ans = (char**)malloc(sizeof(char*) * (ans_len + 1));
	if (ans == 0)
		return (NULL);
	write_split(ans, ans_len, str, c);
	return (ans);
}
