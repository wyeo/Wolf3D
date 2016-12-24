/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:24:53 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 15:25:40 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strmapi() function copies the result of the f() function on each
**	byte of the string pointed to by s and returns a pointer to this new
**	string. Unlike the ft_strmap() function, the f() function works with
**	indexes.
*/

char	*ft_strnew_other_(size_t size)
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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*p;

	if (!(s && f))
		return (NULL);
	len = ft_strlen(s);
	p = ft_strnew_other_(len);
	if (!p)
		return (NULL);
	while (len--)
		*(p + len) = f((unsigned int)len, *(s + len));
	return (p);
}
