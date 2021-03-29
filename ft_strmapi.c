/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:18:22 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:23:05 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
	*/

/*
char	switch_blank(unsigned int i, char c)
{
	char	a;

	a = ' ' ;
	if (i % 2 == 0)
		return (c);
	else
		return (a);
}

int		main(void)
{
	char str[] = "kwakhogi!";
	char *ptr;
	ptr = ft_strmapi(str, *switch_blank);
	printf("ptr : %s\n", ptr);
	return (0);
}
*/