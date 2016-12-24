/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:18:44 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:18:45 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_memccpy() function copies bytes from string src to string dst. If
**	the character c (as converted to an unsigned char) occurs in the string
**	src, the copy stops and a pointer to the byte after the copy of c in the
**	string dst is returned. Otherwise, n bytes are copied, and a NULL pointer
**	is returned.
**	The source and destination strings should not overlap, as the behavior is
**	undefined.
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*scd_dst;
	const char	*scd_src;

	scd_dst = dst;
	scd_src = src;
	while (n--)
	{
		*scd_dst++ = *scd_src;
		if (*scd_src == (char)c)
			return (scd_dst);
		scd_src++;
	}
	return (NULL);
}
