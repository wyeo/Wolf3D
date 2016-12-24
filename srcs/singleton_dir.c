/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton_dir.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:51:50 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:51:52 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

t_pos	*dir(void)
{
	static	t_pos dir = {-1, 0};

	return (&dir);
}

void	set_dir_x(double x)
{
	dir()->x = x;
}

void	set_dir_y(double y)
{
	dir()->y = y;
}

double	get_dir_x(void)
{
	return (dir()->x);
}

double	get_dir_y(void)
{
	return (dir()->y);
}
