/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singleton_plan.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <wyeo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/09 14:52:52 by wyeo              #+#    #+#             */
/*   Updated: 2015/09/09 14:52:54 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/wolf3d.h"

t_pos	*plan(void)
{
	static	t_pos plan = {0, 1};

	return (&plan);
}

void	set_plan_x(double x)
{
	plan()->x = x;
}

void	set_plan_y(double y)
{
	plan()->y = y;
}

double	get_plan_x(void)
{
	return (plan()->x);
}

double	get_plan_y(void)
{
	return (plan()->y);
}
