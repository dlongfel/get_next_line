/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlongfel <dlongfel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:39:55 by dlongfel          #+#    #+#             */
/*   Updated: 2019/10/07 14:39:56 by dlongfel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*elem;
	t_list	*prev;
	t_list	*head;

	prev = NULL;
	head = NULL;
	if (f)
		while (lst)
		{
			if (!(elem = f(lst)))
			{
				if (head)
					free(head);
				return (NULL);
			}
			if (prev)
				prev->next = elem;
			else
				head = elem;
			lst = lst->next;
			prev = elem;
		}
	return (head);
}
