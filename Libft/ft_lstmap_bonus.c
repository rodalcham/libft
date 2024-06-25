/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez@student.42heilbronn.de <rchavez    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:09:01 by rchavez@stu       #+#    #+#             */
/*   Updated: 2024/03/15 08:54:39 by rchavez@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstmap_free(t_list *start, void *cont, void (*del)(void *))
{
	del(cont);
	ft_lstclear(&start, (*del));
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*temp;
	t_list	*prev;
	void	*cont;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	prev = NULL;
	while (lst)
	{
		cont = f(lst -> content);
		temp = ft_lstnew(cont);
		if (!temp)
		{
			return (ft_lstmap_free(start, cont, del));
		}
		if (prev)
			prev -> next = temp;
		else
			start = temp;
		prev = temp;
		lst = lst -> next;
	}
	return (start);
}
