/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:13:46 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:13:50 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	DESCRIPTION
**	The ft_abs() function computes the absolute value of the integer i. It
**	returns the absolute value.
*/

int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}
