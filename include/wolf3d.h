/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:50:24 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:54:17 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H

# define WOLF3D_H
# define W 13
# define A 0
# define S 1
# define D 2
# define LARG 720
# define LONG 720
# define LEFT 123
# define RIGHT 124
# define EXIT 53
# define ABS(x) (x < 0) ? -x : x

# include <stdlib.h>
# include <math.h>
# include <time.h>
# include "../libft/libft.h"
# include "../mlx/mlx.h"

typedef struct		s_pos
{
	double			x;
	double			y;
}					t_pos;

typedef struct		s_var
{
	float	x;
	float	y;
	float	walldist;
	float	height;
	int		hit;
	int		side;
	int		draw_s;
	int		draw_e;
	t_pos	pos;
	t_pos	dir;
	t_pos	plan;
	t_pos	camera;
	t_pos	step;
	t_pos	map;
	t_pos	sidedist;
	t_pos	delta;
	t_pos	olddir;
	int		sreen;
}					t_var;

typedef struct		s_move
{
	int		forward;
	int		backward;
	int		left;
	int		right;
	int		first;
	float	walkspeed;
	float	rotatespeed;
	float	turn;
	float	t_speed;
	float	speed_up;
	float	speed_down;
	float	v;
}					t_move;

typedef struct		s_img
{
	void	*img;
	char	*data;
	int		sl;
	int		bpp;
	int		endian;

}					t_img;

typedef struct		s_env
{
	void	*mlx;
	void	*win;
	t_move	*m;
	t_img	*i;
	t_var	*v;
}					t_env;

t_pos				*dir(void);
void				set_dir_x(double x);
void				set_dir_y(double y);
double				get_dir_x(void);
double				get_dir_y(void);
t_pos				*plan(void);
void				set_plan_x(double x);
void				set_plan_y(double y);
double				get_plan_x(void);
double				get_plan_y(void);
t_pos				*pos(void);
void				set_pos_x(double x);
void				set_pos_y(double y);
double				get_pos_x(void);
double				get_pos_y(void);
int					set_map(int x, int y);
void				turn_move(t_env *e, float vit);
void				vertical_move(t_env *e, float	vit);
void				horizontal_move(t_env *e, float vit);
void				set_move(t_env *e);
void				mlx_pixel_to_image(t_img *img, int x, int y, int color);
void				draw_rest(t_env *e, t_var *v);
void				draw(t_env *e, t_var *v);
void				hit(t_var *v);
void				corect_projection(t_var *v);
void				vect_dir_long(t_var *v);
void				init_var(t_var *v);
t_move				*init(void);
int					key_up(int keycode, t_env *a);
int					key_down(int keycode, t_env *a);
#endif
