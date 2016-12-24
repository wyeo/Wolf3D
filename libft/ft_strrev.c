/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:27:05 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:27:07 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strrev() function reverse the string pointed to by s and returns
**	a pointer to the new string.
*/

char	*ft_strrev(char *s)
{
	char	*tmp;
	char	*ret;
	size_t	i;
	size_t	len;
	size_t	len_cpy;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	len_cpy = len;
	tmp = ft_strnew(len);
	ret = tmp;
	while (i < len_cpy)
	{
		*tmp++ = s[--len];
		i++;
	}
	return (ret);
}
