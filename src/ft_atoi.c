/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 10:51:52 by taichika          #+#    #+#             */
/*   Updated: 2021/04/10 11:29:09 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi_r(const char *str, int tmp_num)
{
	if (*str == '\0')
		return (tmp_num);
	tmp_num = tmp_num * 10 + *(str) - '0';
	return (atoi_r(str + 1, tmp_num));
}

int check_prefix(const char *str)
{
	while(*str == '')
}

int atoi(const char *str)
{
	
}


int main(void)
{
	printf("%d\n", atoi_r("12345",0));
}