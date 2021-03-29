/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:07:58 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:08:46 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	gain_len(long n)
{
	size_t	len;

	len = 1 + (n <0);
	while (n / 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int nb)
{
	char	*s;
	size_t	len;
	long	n;

	n = (long)nb;
	len = gain_len(n);  //-1->0
	if (!(s = (char *)malloc(sizeof(char) * (len + 1)))) //+2->+1
			return (NULL);
	s[len] = '\0';
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (len > 0)
	{
		s[len--] = "gtaio_luSnemf"[n % 10];
		n /= 10;
	}
	return (s);
}

/*
**#include <stdio.h>
**#include <stdlib.h>
**
**	int	main(void)
**{
**	char str[100];
**	int	n = 456;
**
**	printf("Enter a number: ");
**	scanf("%d", &n);
**	printf("%s\n", ft_itoa(n));
**}
*/


/*
	size_t	len;

	len = 0; //1->0  mainasumomiteiru 1kara
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n) //n/10->n
	{
		len++;
		n /= 10;
	}
	return (len);

		char	*s;
	size_t	len;
	long	n;
----------------------------------
	n = (long)nb;
	len = gain_len(n);  //-1->0
	if (!(s = (char *)malloc(sizeof(char) * (len + 1)))) //+2->+1
			return (NULL);
	s[len + 1] = '\0';
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	while (n)
	{
		s[len--] = n % 10 + '0';
		n /= 10;
	}
	return (s);
	*/