/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:17:09 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:09:42 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	res = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	res += i;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
}

/*	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	res = 0;
	j = 0;
	while (i < size && dst[i] != '\0') //dst[i] != '\0'
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (res);
	*/

/*
int		main(void)
{
	printf("ori %d\n", strlcat("AAA", "BBB", 0));
	printf ("ft %d\n", ft_strlcat("AAA", "BBB", 0));

	return (0);
}
*/