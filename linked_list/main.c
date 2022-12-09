/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:15:14 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/09 14:15:14 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

void	ft_print_all(t_list *list)
{
	t_list	*head;

	head = list;
	while (head)
	{
		puts(head->content);
		head = head->next;
	}
}


int	main(void)
{
	t_list	*list;

	list = ft_lstnew("abdel");
	ft_print_all(list);
	free(list);
	return (0);
}
