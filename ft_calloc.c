/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:03:39 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 12:45:09 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = ((char *)malloc(count * size));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, count * size); //while (i < count * size){ptr[i] = 0; i++;}
	return (ptr);
}

/*
**#include <stdio.h>
**#include <stdlib.h>
**
**int     main(void)
**{
**  char *p = NULL;
**
** p = (char*) calloc(4, sizeof(char));
**  if (!p)
**  {
**    return (EXIT_SUCCESS);
**}
**
** p[0] = 'a';
** p[1] = 'b';
** p[2] = 'c';
** p[3] = 0;
** p[4] = 'd';
**
** printf("%s\n", p);
**
**  free(p);
**
**  return (EXIT_SUCCESS);
**}
*/
