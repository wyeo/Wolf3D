/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:19:38 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:19:39 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*p;
	const unsigned char	*s;

	p = dst;
	s = src;
	if (len)
	{
		if (s < p)
		{
			p += len;
			s += len;
			while (len--)
				*--p = *--s;
		}
		else
		{
			while (len--)
				*p++ = *s++;
		}
	}
	return (dst);
}
