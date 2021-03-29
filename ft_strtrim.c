/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:22:00 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:12:01 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	if (s1 == NULL || set == NULL) //(!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	if (!(s2 = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	while (start < end + 1)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}
