/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:10:10 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 04:01:03 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char		*ptr;
	const char	*ptr2;

	ptr = (char *)dst;
	ptr2 = (const char *)src;
	if (ptr == NULL && ptr2 == NULL)
		return (NULL);
	while (len > 0) //len != '\0'
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		len--;
	}
	return (dst);
}
