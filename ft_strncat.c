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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (src[i] != '\0' && i < nb)
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
	unsigned int	end;

	end = 0;
	char	src[] = "les amis";
	char	dest[40] = "Salut ";	
	printf("%s", ft_strncat(dest, src, end));
}
