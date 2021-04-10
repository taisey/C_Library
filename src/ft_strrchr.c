/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:13:54 by taichika          #+#    #+#             */
/*   Updated: 2021/04/09 10:19:57 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int s_len;

	s_len = ft_strlen(s);
	i = 0;

	if (c == '\0')
		return (s + s_len - 1);
	s_len -= 1;
	while (s_len > 0)
	{
		if (((unsigned char*)s)[s_len] == (unsigned char)c)
			return (s + s_len);
		i++;
	}
	return (NULL);
}
