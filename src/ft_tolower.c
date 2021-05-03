/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:46:34 by taichika          #+#    #+#             */
/*   Updated: 2021/04/28 16:29:06 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int c_char;

	c_char = c;
	if (c_char >= 'A' && c_char <= 'Z')
		return ((int)(c_char + ('a' - 'A')));
	return ((int)c_char);
}
