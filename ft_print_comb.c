#include <unistd.h>

void	print_htu(char hundred, char ten, char unity)
{
	write (1, &hundred, 1);
	write (1, &ten, 1);
	write (1, &unity, 1);
	if (hundred != '7' || ten != '8' || unity != '9')
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unity;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unity = ten + 1;
			while (unity <= '9')
			{
				print_htu(hundred, ten, unity);
				unity++;
			}
			ten++;
		}
		hundred++;
	}
}

int	main(void)
{
	ft_print_comb();
}
