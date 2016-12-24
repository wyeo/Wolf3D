/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:14:23 by wyeo              #+#    #+#             */
/*   Updated: 2015/05/04 21:41:27 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_bzero() function writes n zeroed bytes to the string s. If n is
**	zero, ft_bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
