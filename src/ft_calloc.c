/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:56:02 by taichika          #+#    #+#             */
/*   Updated: 2021/04/28 23:09:22 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*ans;
	size_t		i;

	i = 0;
	ans = malloc(count * size);
	if (ans == NULL)
		return (NULL);
	while (i < count * size)
	{
		((char*)ans)[i] = '\0';
		i++;
	}
	return (ans);
}
