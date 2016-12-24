/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:24:42 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:24:43 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew_other(size_t size)
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

char		*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	char	*p;

	if (!(s && f))
		return (NULL);
	len = ft_strlen(s);
	p = ft_strnew_other(len);
	if (!p)
		return (NULL);
	while (len--)
		*(p + len) = f(*(s + len));
	return (p);
}
