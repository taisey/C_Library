/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:27:04 by taichika          #+#    #+#             */
/*   Updated: 2021/04/09 10:42:31 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	i = 0;

	while (i < len)
	{
		if (ft_memcmp(haystack + i, needle) == 0)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
