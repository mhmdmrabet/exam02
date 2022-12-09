/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:30:35 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/09 15:30:35 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

// A -> B -> C -> NULL
// tmp = B
// del A
// lst = B
// B -> C -> NULL
// tmp = C
// dell B
// lst = C
// C -> NULL
// tmp = NULL
// dell C
// lst = NULL

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while ((*lst))
	{
		tmp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = tmp;
	}
}
