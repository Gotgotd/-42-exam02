#include <stdlib.h>

int	count_words(char *str)
{
	int	i = 0;
	int count = 0;

	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			count++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	return (count);
}

char	*ft_strndup(char *str, int c)
{
	int	i = 0;
	char *tab;

	tab = malloc(sizeof(char) * c + 1);
	while (i < c)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(char *str)
{
	int	i = 0;
	int j = 0;
	int k;
	char **tab;

	tab = malloc(sizeof(char *) * (count_words(str) + 1));
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		k = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > k)
		{
			tab[j] = ft_strndup(&str[k], (i - k));
			j++;
		} 
	}
	tab[j] = NULL;
	return (tab);
}
//#include <stdio.h>

/*int main(void)
{
	char tab[] = "salut ca va";
	char *dest = ft_strndup(tab, 5);
	printf("%s", dest);
	free (dest);
	return (0);
} */

/* int	main(void)
{
	char	*str = "ceci est un test !";
	char	**fct = ft_split(str);
	int	i;
	
	for (i = 0; i < count_words(str); i++)
	{
		printf("%s\n", fct[i] );
	}
	free (fct);
	return (0);
}  */