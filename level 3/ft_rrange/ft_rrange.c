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
