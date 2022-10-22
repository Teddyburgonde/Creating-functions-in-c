#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	while (k != size)
	{
		i = 0;
		j = 1;
		while (i != size && j != size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
		i++;
		j++;
		}
	k++;
	}
}

int	main(void)
{
	int	size;
	int	l;
	int	nombre[] = {2, 1, 9, 6, 3, 5, 10, 4, 8, 7};

	size = 9;
	ft_sort_int_tab(nombre, size);
	l = 0;
	while (l != size)
	{
		printf("%d, ", nombre[l]);
		l++;
	}
}
