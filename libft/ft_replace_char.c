/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:21:11 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:21:12 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_replace_char(char *s, int find, int replace)
{
	char	*tmp;
	char	*ret;

	if (!s)
		return (NULL);
	tmp = ft_strnew(sizeof(s));
	ret = tmp;
	while (*s)
	{
		if (*s == find)
			*tmp = replace;
		else
			*tmp = *s;
		s++;
		tmp++;
	}
	return (ret);
}
