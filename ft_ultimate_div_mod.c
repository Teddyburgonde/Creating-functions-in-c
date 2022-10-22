#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	*a = *a / *b;
	*b = *a % *b;
}

int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 2;
	printf("La division de %d par %d = ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("Le modulo = %d", b);
}
