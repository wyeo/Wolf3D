/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:18:06 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:18:07 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_lstmap() function apply the f() function to every element of the
**	lst list in a new list p.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*p;

	if (!lst)
		return (NULL);
	tmp = f(lst);
	p = tmp;
	while ((lst = lst->next))
	{
		tmp->next = f(lst);
		tmp = tmp->next;
	}
	return (p);
}
