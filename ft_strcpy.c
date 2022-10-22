#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{	
	char	dest[20];
	char	*src;

	src = "Salut les amis";
	strcpy(dest, src);
	printf("%s\n", dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
}
