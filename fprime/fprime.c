#include <stdio.h>
#include <stdlib.h>

int    is_prime(int nb)
{
    int    i;

    i = 2;
    if (nb <= 1)
        return (0);
    while (i < (nb / i))
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int    fprime (char *str)
{
    int    nb;
    int    i;

    i = 2;
    nb = atoi(str);
    if (nb <= 0)
        return (1);
    if  (nb == 1)
    {
        printf("1");
        return (1);
    }
    while (nb > 1)
    {
        if (is_prime(i))
        {
            if (nb % i == 0)
            {
				while (nb % i == 0)
				{
					printf("%d", i);
					if (nb == i)
						break ;
					printf("*");
					nb = nb / i; 
				}

            }
        }
		if (i == nb)
			return (1);
        i++;
    }
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(argv[1]);
	printf("\n");
	return (0);
}