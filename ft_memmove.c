/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:00:42 by taichika          #+#    #+#             */
/*   Updated: 2021/04/08 22:34:25 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		((char*)dst)[n - i - 1] = ((char*)src)[n - i - 1];
		i++;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		return (ft_memrcpy(dst, src, len));
	}
	return (ft_memcpy(dst, src, len));
}
