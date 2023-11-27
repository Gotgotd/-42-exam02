#include <unistd.h>

int	ft_atoi (char *str)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr (int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int	main(int ac, char **av)
{
	int	i = 1;
	int res = 0;
	int	nb;

	if (ac <= 1)
		write(1, "\n", 1);
	else
	{
		while (i <= 9)
		{
			nb = ft_atoi(av[1]);
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			res = i * nb;
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
}
