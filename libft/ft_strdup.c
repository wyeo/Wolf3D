/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wyeo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/13 17:23:04 by wyeo              #+#    #+#             */
/*   Updated: 2015/01/13 17:23:05 by wyeo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	DESCRIPTION
**	The ft_strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it. The pointer may
**	subsequently be used as an argument to the function free. If insufficient
**	memory is available, NULL is returned.
*/

char	*ft_strdup(const char *s1)
{
	char	*ret;

	ret = (char *)malloc(sizeof(*ret) * (ft_strlen(s1) + 1));
	if (!ret)
		return (NULL);
	ft_strcpy(ret, s1);
	return (ret);
}
