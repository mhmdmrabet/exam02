/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 09:12:16 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/11 09:12:16 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		n = n / 2;
		if (n % 2 != 0 && n != 1)
			return (0);
	}
	return (1);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d\n", is_power_of_2(atoi(argv[1])));
// 	return (0);
// }
