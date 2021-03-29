/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:04:49 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 12:43:46 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\f' \
		|| c == '\n' || c == '\r')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	long	result;
	int		minus;

	minus = 1;
	while (ft_is_whitespace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (ft_isdigit(*str) && *str != '\0')
		result = result * 10 + minus * (*str++ - '0');
		//result *= 10;
		//result += *str - '0';
		//str++;
	return (result * minus);
	//longminのとき問題になる
}

/*
int		ft_atoi(const char *str)
{
	int				i;
	unsigned long	n;
	int				kigou;

	i = 0;
	n = 0;
	kigou = 0;
	while (c == ' ' || c == '\t' || c == '\v' || c == '\f' \
		|| c == '\n' || c == '\r')
		i++;
	if (str[i] == '-')
	{
		kigou = kigou * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		n = n * 10;
		n = n + str[i] - '0'
		i++;
	}
	return (kigou * n);
}
*/

/*
**	#include <stdlib.h>
**	#include <string.h>
**	#include <stdio.h>
**	int     main()
**{
**    puts("----ft_atoi------");
**    char    str91[] = "-a-5";
**    printf("zisaku  : %d\n", ft_atoi(str91));
**    printf("library : %d\n", atoi(str91));
**    char    str92[] = "-100";
**    printf("zisaku  : %d\n", ft_atoi(str92));
**    printf("library : %d\n", atoi(str92));
**    char    str93[] = "1000321";
**    printf("zisaku  : %d\n", ft_atoi(str93));
**    printf("library : %d\n", atoi(str93));
**    char	str94[] = "2147483648";
**    print"zisaku  : %d\n", ft_atoi(str94));
**    printf("library : %d\n", atoi(str94));
**    char    str95[] = "-2147483649";
**    printf("zisaku  : %d\n", ft_atoi(str95));
**    printf("library : %d\n", atoi(str95));
**    char    str96[] = "100ab100";
**    printf("zisaku  : %d\n", ft_atoi(str96));
**    printf("library : %d\n", atoi(str96));
**    char    str97[] = "\0";
**    printf("zisaku  : %d\n", ft_atoi(str97));
**    printf("library : %d\n", atoi(str97));
**    char    str98[] = "111.11";
**    printf("zisaku  : %d\n", ft_atoi(str98));
**    printf("library : %d\n", atoi(str98));
**    char    str99[] = "-2147483648";
**    printf("zisaku  : %d\n", ft_atoi(str99));
**    printf("library : %d\n", atoi(str99));
**    char    str99_1[] = "2147483647";
**    printf("zisaku  : %d\n", ft_atoi(str99_1));
**    printf("library : %d\n", atoi(str99_1));
**    char str99_2[] ="999999999";
**    printf("zisaku  : %d\n", ft_atoi(str99_2));
**    printf("library : %d\n", atoi(str99_2));
**}
*/
