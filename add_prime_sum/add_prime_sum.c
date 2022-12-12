/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmrabet <mmrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:00:17 by mmrabet           #+#    #+#             */
/*   Updated: 2022/12/12 11:00:17 by mmrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	if (str == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	is_prime(int nb)
{
	int	i;

	if (nb == 1 || nb == 0)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(int nb)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (i <= nb)
	{
		if (is_prime(i))
			result += i;
		i++;
	}
	ft_putnbr(result);
}

int	main(int argc, char **argv)
{
	int	nb;

	nb = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (nb > 0)
			add_prime_sum(nb);
		else
			ft_putchar('0');
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
