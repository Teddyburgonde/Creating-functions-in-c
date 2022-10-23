#include <string.h>
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	while (src[i])
	{
		size = ft_strlen(dest);
		dest[size] = src[i];
		i++;
		size++;
	}
	dest[size] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[40] = "Bonjour ";
	char	src[] = "les amis";

	printf("La fausse : %s\n", ft_strcat(dest, src));
	// printf("La vrai : %s\n", strcat(dest, src));
}
