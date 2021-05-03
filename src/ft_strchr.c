/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:04:05 by taichika          #+#    #+#             */
/*   Updated: 2021/04/21 15:08:40 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (i == 0 || s[i - 1] != '\0')
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
