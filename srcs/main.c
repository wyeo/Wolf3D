/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:52:32 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:52:34 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

#define F forward
#define B backward
#define R right
#define L left

int		expose_hook(t_env *e)
{
	t_var	*v;

	v = NULL;
	if (!(v = (t_var *)malloc(sizeof(t_var))))
		return (0);
	set_move(e);
	if (e->m->F || e->m->B || e->m->L || e->m->R || e->m->turn || e->m->first)
	{
		ft_bzero(e->i->data, LARG * LONG * e->i->bpp / 8);
		set_move(e);
		e->m->first = 0;
		v->x = 0;
		while (v->x < LONG)
		{
			init_var(v);
			vect_dir_long(v);
			hit(v);
			corect_projection(v);
			draw(e, v);
			v->x++;
		}
	}
	mlx_put_image_to_window(e->mlx, e->win, e->i->img, 0, 0);
	free((void *)v);
	return (1);
}

int		main(void)
{
	t_env	e;
	t_img	i;

	e.mlx = mlx_init();
	if (e.mlx == NULL)
		return (1);
	i.img = mlx_new_image(e.mlx, LARG, LONG);
	i.data = mlx_get_data_addr(i.img, &i.bpp, &i.sl, &i.endian);
	e.i = &i;
	e.win = mlx_new_window(e.mlx, LARG, LONG, "Wolf3D");
	e.m = init();
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_hook(e.win, 2, 1, key_down, &e);
	mlx_hook(e.win, 3, 2, key_up, &e);
	mlx_loop_hook(e.mlx, expose_hook, &e);
	mlx_loop(e.mlx);
	return (0);
}
