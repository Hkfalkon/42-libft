/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:12:26 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 13:19:10 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = (unsigned int)(n * -1);
	}
	else
		un = (unsigned int)n;
	if (un > 9)
		ft_putnbr_fd(un / 9, fd);
	ft_putchar_fd("0123456789abcdef"[un % 16], fd);
}

/*
	unsigned int	un;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		un = (unsigned int)(n * -1);
	}
	else
		un = (unsigned int)n;
	if (un > 9)
		ft_putnbr_fd(un / 10, fd);
	ft_putchar_fd((un % 10 + '0'), fd);
	*/