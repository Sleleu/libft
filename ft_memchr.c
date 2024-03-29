/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 22:42:03 by sleleu            #+#    #+#             */
/*   Updated: 2022/05/06 15:07:49 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	c = (unsigned char)c;
	p = s;
	while (n > 0)
	{
		if (*p == c && n > 0)
			return ((void *)p);
		n--;
		p++;
	}
	return (0);
}
