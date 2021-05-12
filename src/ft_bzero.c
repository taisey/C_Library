/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:41:18 by taichika          #+#    #+#             */
/*   Updated: 2021/05/04 09:14:40 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s_ptr;

	s_ptr = (char *)s;
	while (n-- > 0)
	{
		*s_ptr = (char)0;
		s_ptr++;
	}
}
