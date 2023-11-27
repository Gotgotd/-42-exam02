/***
Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int             max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.
***/


int	max(int* tab, unsigned int len)
{
	int	res;
	unsigned int i = 0;

	res = tab[i];
	if (len == 0 || !tab)
		return (0);
	while (i < len)
	{
		if (res < tab[i])
			res = tab[i];
		i++;
	}
	return (res);
}
/* #include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 1, 5, 4};
	printf("%i\n", max(tab, 5));
} */