#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

int	main(void)
{
	int	size;
	int	i;

	i = 0;
	size = 8;
	int chiffre[] = {1, 2, 3, 4, 5, 6, 7, 8};

	ft_rev_int_tab(chiffre, size);
	while (i < size)
	{
		printf("%d", chiffre[i]);
		i++;
	}
}
