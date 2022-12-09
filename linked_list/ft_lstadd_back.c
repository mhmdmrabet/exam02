/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:53:11 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/09 14:53:11 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = (*lst);
	if (!lst || !new || !(*lst))
		return ;
	while (current->next)
		current = current->next;
	current->next = new;
}

/* 
	t_list	*tmp;

	tmp = (*lst);
	if (!lst || !new)
		return ;
	while ((tmp))
	{
		if (tmp->next == NULL)
		{
			tmp->next = new;
			break;
		}
		(tmp) = (tmp)->next;
	}
 */
