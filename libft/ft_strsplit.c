/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:27:16 by wyeo              #+#    #+#             */
/*   Updated: 2015/05/04 05:18:46 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_countchar(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static int		ft_countword(char const *s, char c)
{
	unsigned int		nb;
	unsigned int		len;
	unsigned int		i;

	i = 0;
	nb = 0;
	if (s == 0)
		return (0);
	while (s[i])
	{
		len = ft_countchar(s + i, c);
		if (len)
		{
			nb++;
			i += len;
		}
		else
			i++;
	}
	return (nb);
}

char			**ft_strsplit(char const *s, char c)
{
	char				**ret;
	unsigned int		i;
	unsigned int		nbword;
	unsigned int		nbchr;

	i = 0;
	nbword = 0;
	ret = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (s == 0)
		return (0);
	while (s[i])
	{
		nbchr = ft_countchar(s + i, c);
		if (nbchr)
		{
			ret[nbword] = ft_strsub(s, i, nbchr);
			nbword++;
			i += nbchr;
		}
		else
			i++;
	}
	ret[nbword] = 0;
	return (ret);
}
