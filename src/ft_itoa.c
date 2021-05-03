/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 17:54:52 by taichika          #+#    #+#             */
/*   Updated: 2021/05/01 16:33:14 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_count_digit(int n)
{
	int i;

	i = 1;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_rec_itoa(long n, char *ans)
{
	long div;
	long mod;

	if (n < 0)
	{
		*ans = '-';
		ans++;
		n *= -1;
	}
	div = n / 10;
	mod = n % 10;
	if (div != 0)
		ans = ft_rec_itoa(div, ans);
	*ans = '0' + mod;
	return (ans + 1);
}

char	*ft_itoa(int n)
{
	char	*ans;
	int		is_mins;
	int		len;

	is_mins = 0;
	if (n < 0)
		is_mins = 1;
	len = ft_count_digit(n);
	ans = malloc(sizeof(char) * len + is_mins + 1);
	if (ans == 0)
		return (NULL);
	ft_rec_itoa(n, ans);
	ans[len + is_mins] = '\0';
	return (ans);
}
