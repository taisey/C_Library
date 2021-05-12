/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:50:13 by taichika          #+#    #+#             */
/*   Updated: 2021/05/03 22:40:58 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int	c_char;

	c_char = c;
	if (c_char >= 'a' && c_char <= 'z')
		return (1);
	if (c_char >= 'A' && c_char <= 'Z')
		return (1);
	return (0);
}
