/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleleu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:45:34 by sleleu            #+#    #+#             */
/*   Updated: 2022/05/17 22:59:12 by sleleu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	while (lst)
	{
		ft_lstiter(lst, (*f)(lst->content);
		ft_lstnew(lst, new);		
	}

}
