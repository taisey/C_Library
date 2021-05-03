/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:27:04 by taichika          #+#    #+#             */
/*   Updated: 2021/05/03 12:38:16 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		ft_partlymemcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char*)s2)[i] != '\0')
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		i++;
	}
	if (((unsigned char*)s2)[i] == '\0')
		return (0);
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i] != '\0' && i <= len - ft_strlen(needle))
	{
		if (ft_partlymemcmp(haystack + i, needle, len) == 0)
			return ((char*)haystack + i);
		i++;
	}
	return (NULL);
}
