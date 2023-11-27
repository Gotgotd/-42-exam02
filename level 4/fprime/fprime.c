#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	nb;
	int	i = 2;

	if (ac == 2)
	{
		nb = atoi(av[1]);
		if (nb == 1)
			printf("1");
		while (nb >= i)
		{
			if (nb % i == 0)
			{
				printf("%i", i);
				if (nb == i)
					break ;
				printf("*");
				nb /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
}
