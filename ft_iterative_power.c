#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{	
		result *= nb;
		i++;
	}
	return (result);
}

int	main(void)
{
	printf("%d", ft_iterative_power(3, 2));
}
