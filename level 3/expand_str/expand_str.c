#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main (int ac, char **av)
{
	int	flag;
	int	i = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
				i++;
		while (av[1][i])
		{	
			if (av[1][i] == ' ' || av[1][i] == '\t')
				flag = 1;
			if (!(av[1][i] == ' ' || av[1][i] == '\t'))
			{
				if (flag == 1)
					write(1, "   ", 3);
				flag = 0;
				ft_putchar(av[1][i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}