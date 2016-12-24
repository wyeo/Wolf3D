/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:27:45 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:27:46 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strsub() function copies the string s from start to start + len and
**	returns a pointer to it.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	if (!(p = ft_strnew(len + 1)))
		return (NULL);
	ft_strncpy(p, s + start, len);
	return (p);
}
