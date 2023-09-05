/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:17:39 by sleleu            #+#    #+#             */
/*   Updated: 2022/05/06 13:06:53 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	i = 0;
	map = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (map == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		map[i] = (*f)(i, s[i]);
		i++;
	}
	return (map);
}
