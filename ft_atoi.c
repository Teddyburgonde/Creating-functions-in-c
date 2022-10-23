#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	counter;
	int	a;

	a = 0;
	i = 0;
	counter = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == '-')
			counter *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (a * counter);
}

int	main(void)
{
	char	str[] = "       -568ab888";

	printf("%d", ft_atoi(str));
}
