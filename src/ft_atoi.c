/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:51:52 by taichika          #+#    #+#             */
/*   Updated: 2021/05/04 09:14:01 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

unsigned	long	atoi_r(const char *str, long tmp_num)
{
	if (*str == '\0' || *str < '0' || *str > '9')
		return (tmp_num);
	tmp_num = tmp_num * 10 + *(str) - '0';
	return (atoi_r(str + 1, tmp_num));
}

unsigned	long	space_is(const char *str)
{
	if (*str == ' ' || *str == '\r' || *str == '\f')
		return (1);
	if (*str == '\n' || *str == '\t' || *str == '\v')
		return (1);
	return (0);
}

unsigned	long	check_prefix(const char *str)
{
	unsigned long	minus_c;

	minus_c = 1;
	while (space_is((char *)str) == 1)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus_c *= -1;
		str++;
	}
	if (*str >= '0' && *str <= '9')
		return (minus_c);
	else
		return (0);
}

long	ft_strtol(const char *str)
{
	int				prefix;
	unsigned long	ans;
	unsigned long	check;

	check = 9223372036854775807;
	check += 1;
	prefix = check_prefix(str);
	if (prefix == 0)
		return (0);
	while (*str < '0' || *str > '9')
		str++;
	ans = atoi_r(str, 0);
	if (prefix == -1 && ans > (unsigned long)9223372036854775807)
		return (0);
	if (prefix == 1 && ans > (unsigned long)check)
		return (-1);
	return (prefix * ans);
}

int	ft_atoi(const char *str)
{
	long	ret;

	ret = ft_strtol(str);
	return ((int)ret);
}
