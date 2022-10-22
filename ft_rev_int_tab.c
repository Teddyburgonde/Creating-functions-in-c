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
	int	nombre[];
	int	size;
	int	i;

	nombre = {1, 2, 3, 4, 5, 6, 7};
	size = 7;
	i = 0;
	ft_rev_int_tab(nombre, size);
	while (i < size)
	{	
		printf("%d", nombre[i]);
		i++;
	}
}
