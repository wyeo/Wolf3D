/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:22:33 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:22:35 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strdel() function free a string pointed to by the adress as.
*/

void	ft_strdel(char **as)
{
	if (as)
		ft_memdel((void **)as);
}
