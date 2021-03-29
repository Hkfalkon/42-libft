/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:09:37 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:55:57 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (ptr1 == ptr2 || n == 0)
		return (0);
	while (n > 0) //n != '\0'
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}

/*
**#include <stdio.h>
**#include <stdlib.h>
**#include <string.h>
** int		main()
** {
** puts("----ft_memcmp------");
**     puts("kokoniha sei ka fu ga attemoiikigasuru");
**     char str61[] ="nesugosita!!!";
**     char str62[] ="nesugosita!!!";
**     char str63[] ="nesugosita!!!";
**     printf("zisaku  : %d\n", ft_memcmp(str62, str63, 15));
**     printf("library : %d\n", memcmp(str62, str63, 15));
**
**     printf("zisaku  : %d\n", ft_memcmp("aiueo", "aiue1", 5));
**     printf("library : %d\n", memcmp("aiueo", "aiue1", 5));
**     printf("zisaku  : %d\n", ft_memcmp("aiueo", "aiueo", 5));
**     printf("library : %d\n", memcmp("aiueo", "aiueo", 5));
**     printf("zisaku  : %d\n", ft_memcmp("aiueo", "1iueo", 5));
**     printf("library : %d\n", memcmp("aiueo", "1iueo", 5));
**     printf("zisaku  : %d\n", ft_memcmp("aiueo", "1iueo", 0));
**     printf("library : %d\n", memcmp("aiueo", "1iueo", 0));
**     printf("zisaku  : %d\n", ft_memcmp("", "", 0));
**     printf("library : %d\n", memcmp("", "", 0));
**}
*/
