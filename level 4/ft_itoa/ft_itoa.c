#include <stdlib.h>

int	count_digit(long int nb)
{
	int	count = 0;

	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb > 9)
	{
		nb /= 10;
		count++;
	}
	return(count + 1);
}

char	*ft_itoa(int nbr)
{
	long int nb = nbr;
	char	*str;
	int	digit = count_digit(nb);

	str = malloc(sizeof(char) * digit + 1);
	if (!str)
		return (NULL);
	str[digit--] = '\0';
	if (nb < 0)
		nb = -nb;
	while (digit >= 0)
	{
		str[digit--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (nbr < 0)
		str[0] = '-';
	return (str);
}

