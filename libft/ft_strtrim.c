/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:27:55 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:27:56 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strtrim() function cut white-space characters to the beginning and
**	to the end of a string pointed to by s. It returns a pointer to the new
**	string.
*/

char		*ft_strnew_other_1(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = '\0';
		i = i + 1;
	}
	str[size] = '\0';
	return (str);
}

char		*ft_strtrim(char const *s)
{
	size_t	len;
	char	*p;

	if (!s)
		return (NULL);
	while (*s && ft_isspace((unsigned char)*s))
		s++;
	len = ft_strlen(s);
	while (*s && ft_isspace((unsigned char)s[--len]))
		;
	if (!(p = ft_strnew_other_1(len)))
		return (NULL);
	p = ft_strncpy(p, s, len + 1);
	p[len + 1] = '\0';
	return (p);
}
