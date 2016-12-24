/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   computer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:51:10 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:51:14 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"
#define WDIST v->walldist

void	vect_dir_long(t_var *v)
{
	if (v->dir.x < 0)
	{
		v->step.x = -1;
		v->sidedist.x = (v->pos.x - v->map.x) * v->delta.x;
	}
	else
	{
		v->step.x = 1;
		v->sidedist.x = (v->map.x + 1.0 - v->pos.x) * v->delta.x;
	}
	if (v->dir.y < 0)
	{
		v->step.y = -1;
		v->sidedist.y = (v->pos.y - v->map.y) * v->delta.y;
	}
	else
	{
		v->step.y = 1;
		v->sidedist.y = (v->map.y + 1.0 - v->pos.y) * v->delta.y;
	}
}

void	hit(t_var *v)
{
	while (v->hit == 0)
	{
		if (v->sidedist.x < v->sidedist.y)
		{
			v->sidedist.x += v->delta.x;
			v->map.x += v->step.x;
			v->side = 0;
		}
		else
		{
			v->sidedist.y += v->delta.y;
			v->map.y += v->step.y;
			v->side = 1;
		}
		if (set_map((int)v->map.x, (int)v->map.y) > 0)
			v->hit = 1;
	}
}

void	corect_projection(t_var *v)
{
	if (v->side == 0)
		WDIST = ABS((v->map.x - v->pos.x + (1 - v->step.x) / 2) / v->dir.x);
	else
		WDIST = ABS((v->map.y - v->pos.y + (1 - v->step.y) / 2) / v->dir.y);
	v->height = ABS((int)(LONG / v->walldist));
	v->draw_s = (int)(-v->height / 2 + LONG / 2);
	v->draw_e = (int)(v->height / 2 + LONG / 2);
	if (v->draw_s < 0)
		v->draw_s = 0;
	if (v->draw_e >= LONG)
		v->draw_e = LONG - 1;
	v->y = v->draw_s;
}
