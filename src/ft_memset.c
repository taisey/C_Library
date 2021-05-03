/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:36:16 by taichika          #+#    #+#             */
/*   Updated: 2021/04/21 17:10:28 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void *a;

	a = b;
	while (len-- > 0)
	{
		*(char*)b = (unsigned char)c;
		b++;
	}
	return (a);
}
