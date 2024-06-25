/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:22:49 by rchavez           #+#    #+#             */
/*   Updated: 2024/06/25 14:53:39 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlibft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*temp;

	temp = lst;
	del(temp -> content);
	free(temp);
}
