/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:07:30 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/09 08:07:30 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "level1.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr("Fonction First Word : ");
		first_word(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
