#include <unistd.h>

void ft_is_min(char c)
{
	int i = 0;
	int res;

	res = c - 'a';
	while (i <= res)
	{
		write(1, &c, 1);
		i++;
	}
}

void ft_is_maj(char c)
{
	int i = 0;
	int res;

	res = c - 'A';
	while (i <= res)
	{
		write(1, &c, 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				ft_is_min(av[1][i]);
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				ft_is_maj(av[1][i]);
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}