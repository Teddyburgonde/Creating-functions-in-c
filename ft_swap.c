#include <stdio.h>

void	ft_swap(int	*a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 11;
	b = 20;
	printf("La valeur de a = %d et b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Maintenant la valeur de a = %d et b = %d\n", a, b);
}
