#include <stdio.h>

int	ft_sqrt(int nb)
{	
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_sqrt(25));
}
