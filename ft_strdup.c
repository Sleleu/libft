/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 20:51:13 by sleleu            #+#    #+#             */
/*   Updated: 2022/05/03 20:51:52 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tab;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (s1[size])
		size++;
	tab = malloc(sizeof(char) * size + 1);
	if (tab == NULL)
		return (NULL);
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
