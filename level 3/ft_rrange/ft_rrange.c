#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	len;
	int i = 0;
	int	*tab;

	len = end - start;
	tab = malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	while (start <= end)
	{
		tab[i] = end;
		end--;
		i++;
	}
	return(tab);
}
/* #include <stdio.h>

int	main(void)
{
	int start = 0;
	int	end = 0;
	int	*tab = ft_rrange(start, end);
	int i = 0;
	while (i <= (end - start))
	{
		printf("%i\n", tab[i]);
		i++;
	}
	return (0);
} */