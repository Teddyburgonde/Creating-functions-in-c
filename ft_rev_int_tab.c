#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
}

int	main(void)
{
	int	size;
	int	i;

	size = 8;
	i = 0;
	int	nombre[] = {1, 2, 3, 4, 5, 6, 7, 8};
	ft_rev_int_tab(nombre, size);
	while (i < size)
	{	
		printf("%d", nombre[i]);
		i++;
	}
}
