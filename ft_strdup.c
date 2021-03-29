/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:15:34 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:03:45 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	size_t  n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}

char		*ft_strdup(const char *src)
{
	char	*r;
	size_t  len;

	len = ft_strlen(src) + 1;
	r = malloc(len);
	if (!r)
		return (NULL);
	ft_strcpy(r, (char *)src); // while (src[i]){ptr[i] = src[i]; i++;}ptr[i] = '\0';
	return (r);
}
