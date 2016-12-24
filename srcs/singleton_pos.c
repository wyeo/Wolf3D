/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton_pos.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:52:06 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:52:08 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

t_pos	*pos(void)
{
	static	t_pos pos = {11, 19};

	return (&pos);
}

void	set_pos_x(double x)
{
	pos()->x = x;
}

void	set_pos_y(double y)
{
	pos()->y = y;
}

double	get_pos_x(void)
{
	return (pos()->x);
}

double	get_pos_y(void)
{
	return (pos()->y);
}
