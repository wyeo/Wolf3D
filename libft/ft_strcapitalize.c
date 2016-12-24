/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:21:22 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:21:23 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *s)
{
	char	*tmp;
	char	*ret;

	if (!s)
		return (NULL);
	tmp = ft_strnew(sizeof(s));
	ret = tmp;
	*tmp++ = ft_toupper(*s++);
	while (*s)
		*tmp++ = ft_tolower(*s++);
	return (ret);
}
