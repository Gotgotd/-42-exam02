/***
Assignment name : ft_strcspn
Expected files  : ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t  ft_strcspn(const char *s, const char *reject);
***/

#include <stdio.h>

int	ft_strchr(const char *str, const char c)
{
	int	i = 0;

	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;

	while (s[i])
	{
		if (ft_strchr(reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}

/* int	main(void)
{
	const char *str = "bonjour";
	const char *reject = "\0";

	printf("%i\n", (int) ft_strcspn(str, reject));
	return(0);
}   */