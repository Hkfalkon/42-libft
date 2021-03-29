/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:20:05 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/14 13:53:47 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t blen)
{
	size_t	b_i;
	size_t	l_i;

	l_i = 0;
	if (little[l_i] == '\0')
	{
		return ((char *)big);
	}
	while (big[l_i] && l_i < blen)
	{
		b_i = 0;
		while (big[b_i + l_i] == little[b_i])
		{
			b_i++;
			if (!little[b_i])
				return ((char *)&big[l_i]);
			else if (b_i + l_i < blen)
				return (NULL);
		}
		l_i++;
	}
	return (NULL);
}

/*
	size_t	b_i;
	size_t	l_i;

	l_i = 0;
	if (little[l_i] == '\0')
	{
		return ((char *)big);
	}
	while (big[l_i] && l_i < blen)
	{
		b_i = 0;
		if (big[l_i] == little[b_i])
		{
			while (big[b_i + l_i] == little[b_i] && b_i + l_i < blen)
			{
				b_i++;
				if (!little[b_i])
				{
					return ((char *)&big[l_i]);
				}
			}
		}
		l_i++;
	}
	return (0);
	*/

/*
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!to_find[j])
		return ((char *)&str[i]);
	while ((str[i]) && (i + j < len))
	{
		while ((str[i + j ] == to_find[j]) && (i + j < len))
		{
			j++;
			if (!to_find[j])
				return ((char *)&str[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
*/