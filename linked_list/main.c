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

void	del(void *item)
{
	(void)item;
}

void	ft_print_all(t_list *list)
{
	t_list	*head;
	int		i;

	head = list;
	i = 1;
	while (head)
	{
		printf("[%d] : %s\n", i++, (char *)head->content);
		head = head->next;
	}
}

int	main(void)
{
	t_list	*list;

	list = ft_lstnew("mohamed");
	printf("Size list : %d\n", ft_lstsize(list));
	ft_print_all(list);
	return (0);
}
