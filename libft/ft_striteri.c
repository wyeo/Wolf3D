/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:23:37 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:23:38 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	DESCRIPTION
**	The ft_striteri() function applies the f() function by passing its index
**	to each byte of the string pointed to by s.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}
