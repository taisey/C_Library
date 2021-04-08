/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:52:10 by taichika          #+#    #+#             */
/*   Updated: 2021/04/08 22:34:42 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
		if (((char*)src)[i] == c)
			return (src + i);
	}
	return (NULL);
}
