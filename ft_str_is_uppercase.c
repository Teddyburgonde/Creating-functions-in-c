#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	*test;

	test = "saL";
	printf("%d", ft_str_is_uppercase(test));
}
