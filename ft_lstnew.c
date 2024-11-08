/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:25:47 by parmando          #+#    #+#             */
/*   Updated: 2024/05/20 12:38:16 by parmando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*e;

	e = malloc(sizeof(t_list));
	if (!e)
		return (NULL);
	e->content = content;
	e->next = NULL;
	return (e);
}
