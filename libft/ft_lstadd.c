/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:17:02 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:17:04 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_lstadd() function adds new element at the beginning of the list
**	alst.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!(alst && new))
		return ;
	if (*alst)
		new->next = *alst;
	*alst = new;
}
