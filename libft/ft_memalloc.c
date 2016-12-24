/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:18:32 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:18:34 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	if ((int)size < 0)
		return (NULL);
	s = (void *)malloc(sizeof(*s) * size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}
