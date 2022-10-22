#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	mot[] = "bonjour";

	printf("Le nombre de lettres dans %s est : %d", mot, ft_strlen(mot));
}
