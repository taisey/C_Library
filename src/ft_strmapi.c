/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 11:53:11 by taichika          #+#    #+#             */
/*   Updated: 2021/05/01 16:34:33 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	int				ans_len;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	ans_len = ft_strlen(s);
	ans = malloc(ans_len + 1);
	if (ans == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
