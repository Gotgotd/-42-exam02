#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac != 4)
	{
		ft_putchar('\n');
		return(0);
	}
	if (ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
	{
		ft_putchar('\n');
		return(0);
	}
	while(av[1][i])
	{
		if (av[1][i] == av[2][0])
		{
			av[1][i] = av[3][0];
			i++;
		}
		i++;
	}
	ft_putstr(av[1]);
	ft_putchar('\n');
	return(0);
}

