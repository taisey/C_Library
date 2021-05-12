/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 10:42:21 by taichika          #+#    #+#             */
/*   Updated: 2021/05/04 09:19:48 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	c_char;

	c_char = c;
	if (c_char >= 'a' && c_char <= 'z')
		return ((int)(c_char + ('A' - 'a')));
	return ((int)c_char);
}
