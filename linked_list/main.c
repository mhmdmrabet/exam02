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

void	ft_double(void *item)
{
	char	*tmp;

	tmp = (char *)item;
	*tmp ="s";
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
	t_list	*new_element;

	list = ft_lstnew("ab");
	new_element = ft_lstnew("bc");
	ft_lstadd_front(&list, new_element);
	ft_lstadd_back(&list, ft_lstnew("cd"));
	printf("Size list : %d\n", ft_lstsize(list));
	ft_lstiter(list, ft_double);
	ft_print_all(list);
	// printf("LAST : %s\n", (char *)(ft_lstlast(list)->content));
	return (0);
}
