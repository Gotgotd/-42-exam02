#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = ('A' + 'Z') - av[1][i]; 
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = ('a' + 'z') - av[1][i];
			i++;
		}
		ft_putstr(av[1]);
	}
	ft_putchar('\n');
}