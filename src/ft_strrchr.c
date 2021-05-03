/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:13:54 by taichika          #+#    #+#             */
/*   Updated: 2021/05/01 14:43:32 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int s_len;

	s_len = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + s_len);
	s_len -= 1;
	while (s_len >= 0)
	{
		if (((char*)s)[s_len] == (char)c)
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);
}
