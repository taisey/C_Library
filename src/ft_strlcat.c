/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:41:59 by taichika          #+#    #+#             */
/*   Updated: 2021/04/09 10:03:10 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	strlcat(char *dst, char *src, size_t dstsize)
{
	int i;
	int dst_len;
	int src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (dstsize - (dst_len + i) - 1 > 0)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dstsize != 0 && dst_len < dstsize)
		dst[i] = '\0';
	return (dst_len + src_len);
}
