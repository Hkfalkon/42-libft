/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkwak <hkwak@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 17:13:21 by hkwak             #+#    #+#             */
/*   Updated: 2021/02/15 14:21:11 by hkwak            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			gain_bspltedlen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			len++;
		while (*s && *s != c)
			s++;
	}
	return (len);
}

static int			gain_elmntlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char			*ft_strndup(const char *s1, int n)
{
	char	*dst;

	if (!(dst = (char *)malloc(sizeof(char) * (n + 1))))
		return (0);
	ft_strlcpy(dst, s1, n + 1);
	return (dst);
}

static char			**set_str(char const *s, char **dst, char c)
{
	char	**head;
	int		i;		

	head = dst;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			i = 0;
			if (!(*dst = ft_strndup(s, gain_elmntlen(s, c))))
				while (head[i] != NULL)
				{
					free(head[i]);
					head[i] = NULL; //nakutemoii
					i++;
				}
				free(head);
				head = NULL; //nakutemoii
				return (0);
			dst++;
		}
		while (*s && *s != c)
			s++;
	}
	*dst = NULL;
	return (head);
}
/*
char	**ft_word_split(char **ptr, char const *s, char c, sizr_t words
{
	size_t	i;
	size_t	j;
	size_t	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[i] && s[i] == c)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		if (!(ptr[j] = (char *)malloc(sizeof(char) * (word_len + 1))))
			return (ft_free(ptr));
		ptr[j] = ft_word_make(ptr[j], s, i, gain_elmntlen);
		gain_elmntlen = 0;
		j++;
	}
	ptr[j] = NULL;
	return (NULL);
}
*/
char				**ft_split(char const *s, char c)
{
	char	**dst;
	int		len;

	if (s == NULL)
		return (NULL);
	len = gain_bspltedlen(s, c);
	if (!(dst = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	return (set_str(s, dst, c));
}
