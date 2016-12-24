/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:51:22 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:51:24 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

void	mlx_pixel_to_image(t_img *img, int x, int y, int color)
{
	unsigned char	color1;
	unsigned char	color2;
	unsigned char	color3;

	color1 = color >> 0;
	color2 = color >> 8;
	color3 = color >> 16;
	img->data[y * img->sl + x * img->bpp / 8] = color1;
	img->data[y * img->sl + x * img->bpp / 8 + 1] = color2;
	img->data[y * img->sl + x * img->bpp / 8 + 2] = color3;
}

void	draw_rest(t_env *e, t_var *v)
{
	if (v->draw_e < 0)
		v->draw_e = LONG;
	v->y = v->draw_e;
	while (v->y < LONG)
	{
		mlx_pixel_to_image(e->i, v->x, v->y, 0x000000);
		mlx_pixel_to_image(e->i, v->x, LONG - v->y - 1, 0x3399FF);
		v->y++;
	}
}

void	draw(t_env *e, t_var *v)
{
	while (v->y < v->draw_e)
	{
		if (v->side == 1)
		{
			if (v->step.y > 0)
				mlx_pixel_to_image(e->i, v->x, v->y, 0x496184);
			else
				mlx_pixel_to_image(e->i, v->x, v->y, 0x003859);
		}
		else
		{
			if (v->step.x > 0)
				mlx_pixel_to_image(e->i, v->x, v->y, 0x2B4557);
			else
				mlx_pixel_to_image(e->i, v->x, v->y, 0x042833);
		}
		v->y++;
	}
	draw_rest(e, v);
}
