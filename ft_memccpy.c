/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:08:51 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:27:06 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_d;
	unsigned char	*ptr_s;

	ptr_d = (unsigned char *)d;
	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		if (ptr_d[i] == (unsigned char)c)
		{
			return ((void *)(d + i + 1)); //place is different from the number
		}
		++i;
	}
	return (NULL);
}
