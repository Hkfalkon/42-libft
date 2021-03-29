/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:22:33 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:26:20 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	s_i;
	size_t	p_i;
    size_t	i;

	if (s == NULL)
		return (NULL);
    i = 0;
	while (start + len > i && s[i] != '\0')
		i++;
    if (i < start)
        len = 0;
    else if (i < start + len)
        len = i - start;
	s_i = start;
	p_i = 0;
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (p_i < len && s_i <= i)
		p[p_i++] = s[s_i++];
	p[p_i] = '\0';
	return (p);
}

/* 
#include <stdio.h>

int     main()
{
    char*   s1 = ft_substr(NULL, 5, 5);
    char*   s2 = ft_substr("aiueo", 1, 3);
    char*   s3 = ft_substr("aiueo", 3, 1);
    char*   s4 = ft_substr("aiueo", 0, 10);

    printf("%s|%s|%s|%s", s1, s2, s3, s4);
    free(s1);
    free(s2);
    free(s3);
    free(s4);
}
 */