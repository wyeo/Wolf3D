/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:19:05 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:19:06 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*scd_s1;
	const unsigned char	*scd_s2;

	scd_s1 = s1;
	scd_s2 = s2;
	while (n--)
	{
		if (*scd_s1 != *scd_s2)
			return (*scd_s1 - *scd_s2);
		else
		{
			scd_s1++;
			scd_s2++;
		}
	}
	return (0);
}
