/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:16:29 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 15:43:20 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sl(const char *str)
{
	size_t i;

	i = 0;
	while (str != NULL && str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!(s1) || !(s2))
		return (NULL);
	str = (char*)malloc(sizeof(char) * (ft_sl(s1) + ft_sl(s2) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}


/*
while (s1[i])
		str[i++] = s1[i++];
	i = 0;
	while (s2[j])
		str[i++] = s2[j++];
*/