/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:52:42 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:52:43 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"
#define M set_map
#define T t_speed

void	vertical_move(t_env *e, float vit)
{
	if (e->m->forward)
	{
		if (M((int)(get_pos_x() + (get_dir_x() * vit)), (int)get_pos_y()) == 0)
			set_pos_x(get_pos_x() + (get_dir_x() * vit));
		if (M((int)get_pos_x(), (int)(get_pos_y() + (get_dir_y() * vit))) == 0)
			set_pos_y(get_pos_y() + (get_dir_y() * vit));
	}
	if (e->m->backward)
	{
		if (M((int)(get_pos_x() - (get_dir_x() * vit)), (int)get_pos_y()) == 0)
			set_pos_x(get_pos_x() - (get_dir_x() * vit));
		if (M((int)get_pos_x(), (int)(get_pos_y() - (get_dir_y() * vit))) == 0)
			set_pos_y(get_pos_y() - (get_dir_y() * vit));
	}
}

void	turn_move(t_env *e, float vit)
{
	float	oldd;
	float	oldp;

	if (e->m->turn)
	{
		oldd = get_dir_x();
		set_dir_x(get_dir_x() * cos(-e->m->T) - get_dir_y() * sin(-e->m->T));
		set_dir_y(oldd * sin(-e->m->T) + get_dir_y() * cos(-e->m->T));
		oldp = get_plan_x();
		set_plan_x(get_plan_x() * cos(-e->m->T) - get_plan_y() * sin(-e->m->T));
		set_plan_y(oldp * sin(-e->m->T) + get_plan_y() * cos(-e->m->T));
	}
}

void	horizontal_move(t_env *e, float vit)
{
	if (e->m->right)
	{
		if (M((int)(get_pos_x() + (get_plan_x() * vit)), (int)get_pos_y()) == 0)
			set_pos_x(get_pos_x() + (get_plan_x() * vit));
		if (M((int)get_pos_x(), (int)(get_pos_y() + (get_plan_y() * vit))) == 0)
			set_pos_y(get_pos_y() + (get_plan_y() * vit));
	}
	if (e->m->left)
	{
		if (M((int)(get_pos_x() - (get_plan_x() * vit)), (int)get_pos_y()) == 0)
			set_pos_x(get_pos_x() - (get_plan_x() * vit));
		if (M((int)get_pos_x(), (int)(get_pos_y() - (get_plan_y() * vit))) == 0)
			set_pos_y(get_pos_y() - (get_plan_y() * vit));
	}
}

void	set_move(t_env *e)
{
	float	speed;

	if (e->m->speed_up)
		speed = 0.04;
	else
		speed = 0.1;
	horizontal_move(e, speed);
	turn_move(e, speed);
	vertical_move(e, speed);
}
