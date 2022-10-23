#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	test1[] = "z";
	char	test2[] = "m";

	printf("la vrai : %d\n", strcmp(test1, test2));
	printf("%d", ft_strcmp(test1, test2));
}
