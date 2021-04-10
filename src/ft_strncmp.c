/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:42:56 by taichika          #+#    #+#             */
/*   Updated: 2021/04/09 10:51:45 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	int c_n;

	i = 0;
	c_n = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && c_n < n)
	{
		i++;
		c_n++;
	}
	return (s1[i] - s2[i]);
}
