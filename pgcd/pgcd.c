/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:07:11 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/12 19:07:11 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int nb1, int nb2)
{
	while (nb1 != nb2)
	{
		if (nb1 > nb2)
			nb1 = nb1 - nb2;
		else
			nb2 = nb2 - nb1;
	}
	printf("%d", nb1);
}

int	my_pgcd(int nb1, int nb2)
{
	int	i;
	int	pgcd;

	i = 1;
	pgcd = i;
	while (i <= nb1 && i <= nb2)
	{
		if (nb1 % i == 0 && nb2 % i == 0)
			pgcd = i;
	}
	return (pgcd);
}

int	my_pgcd2(int nb1, int nb2)
{
    int	min;
    int	max;
    int	reste;
    int	pgcd;

    if (nb1 > nb2)
    {
        min = nb2;
        max = nb1;
    }
    else
    {
        min = nb1;
        max = nb2;
    }
    reste = max % min;
    while (reste != 0)
    {
        pgcd = reste;
        reste = min % reste;
        min = pgcd;
    }
    return (pgcd);
}

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;

	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		if (nb1 > 0 && nb2 > 0)
			printf("%d",my_pgcd2(nb1, nb2));
	}
	printf("\n");
	return (0);
}
