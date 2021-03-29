/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:21:32 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:50:07 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	i;

	p = NULL;
	i = 0;
	while (s[i] != '\0')
		i++;
    while (i > 0)
	{
		if (s[i] == c)
            return (p);
		i++;
	}
	return (p); //後ろからっ文字を見る
}

/*	char	*p;
	size_t	i;

	p = NULL;
	i = 0;
	if (c == 0) // '\0'->0
	{
		while (s[i] != '\0')
			i++;
		return ((char *)&s[i]);
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = (char *)&s[i];
		i++;
	}
	return (p);
    */
/*
   	char	*p;
	size_t	i;

	p = NULL;
	i = 0;
	if (c == 0) // '\0'->0
	{
		while (s[i] != '\0')
			i++;
		return ((char *)&s[i]);
	}
	while (s)
	{
		if (s[i] == c)
			p = (char *)&s[i];
        if (s[i] = '\0')
        return (p);
		i++;
	}
	return (p);
    */