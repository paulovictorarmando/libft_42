/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:44:50 by parmando          #+#    #+#             */
/*   Updated: 2024/05/20 17:59:57 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*lst1;

	while (*lst)
	{
		lst1 = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lst1;
	}
	*lst = NULL;
}
