/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taichika <taichika@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:13:17 by taichika          #+#    #+#             */
/*   Updated: 2021/05/01 16:15:49 by taichika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ans;
	int			i;
	int			len;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (len == 0)
		return (malloc(1));
	i = 0;
	ans = malloc(sizeof(char) * len + 1);
	if (ans == 0)
		return (NULL);
	while (*s1 != '\0')
	{
		ans[i++] = *(s1++);
	}
	while (*s2 != '\0')
	{
		ans[i] = *s2;
		i++;
		s2++;
	}
	ans[i] = '\0';
	return (ans);
}
