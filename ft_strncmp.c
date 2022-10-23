#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{	
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	unsigned int	n;

	n = 2;
	char	test1[] = "b";
	char	test2[] = "b";
	printf("La vrai : %d\n", strncmp(test1, test2, n));
	printf("La fausse : %d\n", ft_strncmp(test1, test2, n));
}
