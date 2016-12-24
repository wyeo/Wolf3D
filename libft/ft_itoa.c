/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:16:51 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:16:54 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_atoi() function converts an integer to a string. A pointer to this
**	string is returned.
*/

static int	count_digits(int n)
{
	size_t	count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char		*ft_itoa(int n)
{
	char			*s;
	size_t			len;
	unsigned int	cpy_n;

	len = count_digits(n);
	cpy_n = n;
	if (n < 0)
	{
		cpy_n = -n;
		len++;
	}
	if (!(s = ft_strnew(len)))
		return (NULL);
	s[--len] = cpy_n % 10 + 48;
	while (cpy_n /= 10)
		s[--len] = cpy_n % 10 + 48;
	if (n < 0)
		s[0] = '-';
	return (s);
}
