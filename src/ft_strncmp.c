/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:42:56 by taichika          #+#    #+#             */
/*   Updated: 2021/04/28 21:30:17 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int			i;
	size_t		c_n;

	i = 0;
	c_n = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && c_n < n - 1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		c_n++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
