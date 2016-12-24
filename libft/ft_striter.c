/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:23:25 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:23:27 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	DESCRIPTION
**	The ft_striter() function applies the f() function to each byte of a
**	string pointed to by s.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
			f(s++);
	}
}
