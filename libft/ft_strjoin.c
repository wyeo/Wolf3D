/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:23:48 by wyeo              #+#    #+#             */
/*   Updated: 2015/03/29 05:49:39 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strjoin() function copies the string s1 and append to it the string
**	s2 to a new string, then returns a pointer to this new string.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if (!(s1 && s2))
		return (NULL);
	if (!(s = ft_strnew(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1)))
		return (NULL);
	if (!s1)
		ft_strcpy(s, s2);
	else if (!s2)
		ft_strcpy(s, s1);
	else
	{
		ft_strcpy(s, s1);
		ft_strcat(s, s2);
	}
	return (s);
}
