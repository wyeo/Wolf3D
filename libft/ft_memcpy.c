/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:19:15 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:19:17 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*scd_dst;
	unsigned const char	*scd_src;

	scd_dst = dst;
	scd_src = src;
	while (n--)
		*scd_dst++ = *scd_src++;
	return (dst);
}
