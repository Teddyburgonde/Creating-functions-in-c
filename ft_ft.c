#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;

	a = 55;
	printf("a ce stade a = %d\n", a);
	ft_ft(&a);
	printf("maintenant a = %d", a);
}
