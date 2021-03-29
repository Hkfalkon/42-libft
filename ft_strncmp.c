/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:19:35 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:13:25 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}
/*
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
	{
		if (str1[i] == '\0')
			return (0);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
	*/

/*
while (i < n)
{
	if (!s1[i] && !s2[i])
		return (0);
	if (s1[i] - s2[i] != 0)
		return ((unsigned char)s1[i] - (unsingned char)s2[i]);
	else
		i++;
	}
	return (0);
}
*/