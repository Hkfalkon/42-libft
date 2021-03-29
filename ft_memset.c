/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:10:42 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 13:03:36 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)buf;
	while (len > 0)
	{
		*ptr = (unsigned char)ch;
		ptr++;
		len--;
	}
	return (buf);
}
