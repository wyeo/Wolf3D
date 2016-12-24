/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:28:04 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:28:05 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strupcase() function change all lowered characters to its capital
**	character. It returns a pointer to the new string.
*/

char	*ft_strupcase(char *s)
{
	char	*tmp;
	char	*ret;

	if (!s)
		return (NULL);
	tmp = ft_strnew(sizeof(s));
	ret = tmp;
	while (*s)
		*tmp++ = ft_toupper(*s++);
	return (ret);
}
