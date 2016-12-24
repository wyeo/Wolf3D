/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:21:51 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:21:52 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	DESCRIPTION
**	The ft_strclr() function assigns the null-terminating character to each
**	byte in the string s.
*/

void	ft_strclr(char *s)
{
	if (s)
	{
		while (*s)
			*s++ = '\0';
	}
}
