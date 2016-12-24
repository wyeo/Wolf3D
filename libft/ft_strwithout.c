/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strwithout.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaint-j <psaint-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/31 21:27:06 by psaint-j          #+#    #+#             */
/*   Updated: 2015/09/09 15:26:40 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char	*ft_strwithout(char *str, char c)
{
	int		len;
	int		i;
	int		j;
	int		b;
	char	*to_return;

	i = 0;
	j = 0;
	b = ft_count_char(str, c);
	len = ft_strlen(str) - b;
	to_return = malloc(sizeof(char) * (len + 1));
	while (str[i] != '\0')
	{
		if (str[i] != 32)
		{
			to_return[j] = str[i];
			j++;
		}
		i++;
	}
	return (to_return);
}
