/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:52:19 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:52:22 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

int		key_down(int keycode, t_env *e)
{
	if (keycode == W)
		e->m->forward = 1;
	if (keycode == A)
		e->m->left = 1;
	if (keycode == S)
		e->m->backward = 1;
	if (keycode == D)
		e->m->right = 1;
	if (keycode == LEFT)
	{
		e->m->turn = 1;
		e->m->t_speed = -0.1;
	}
	if (keycode == RIGHT)
	{
		e->m->turn = 1;
		e->m->t_speed = 0.1;
	}
	if (keycode == EXIT)
		exit(0);
	return (1);
}

int		key_up(int keycode, t_env *e)
{
	if (keycode == W)
		e->m->forward = 0;
	if (keycode == A)
		e->m->left = 0;
	if (keycode == S)
		e->m->backward = 0;
	if (keycode == D)
		e->m->right = 0;
	if (keycode == LEFT)
		e->m->turn = 0;
	if (keycode == RIGHT)
		e->m->turn = 0;
	if (keycode == LEFT)
	{
		e->m->turn = 0;
		e->m->t_speed = 0;
	}
	if (keycode == RIGHT)
	{
		e->m->turn = 0;
		e->m->t_speed = 0;
	}
	return (0);
}
