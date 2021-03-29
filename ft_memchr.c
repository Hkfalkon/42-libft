/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:09:09 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 12:48:07 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char*)s;
	while (++i <= n)
		if (*(ptr++) == (unsigned char)c)
			return ((void*)--ptr);
	return (0);
}


/*
	size_t			i;
	unsigned char	*ptr;
	size_t			len;

	i = 0;
	ptr = (unsigned char*)s;
	len = ft_strlen(*ptr);
	while (i <= n && ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)c)
			return ((void*)ptr);
		i++;
	}
	return (0);
	*/