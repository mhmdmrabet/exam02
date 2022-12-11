/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 08:48:20 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/11 08:48:20 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"



void	search_and_replace(char *str, char *letter, char *replacement_letter)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == letter[0])
			str[i] = replacement_letter[0];
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		search_and_replace(argv[1], argv[2], argv[3]);
	}
	write(1, "\n", 1);
}
