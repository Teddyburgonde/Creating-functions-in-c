#include <unistd.h>

int	main(void)
{
	char	centaine;
	char	dizaine;
	char	unit;

	centaine = '0';
	while (centaine < '7')
	{
		dizaine = centaine + 1;
		while (dizaine < '9')
		{
			unit = dizaine + 1;
			while (unit <= '9')
			{
				write(1, &centaine, 1);
				write(1, &dizaine, 1);
				write(1, &unit, 1);
				write(1, ",", 1);
			unit++;
			}
		dizaine++;
		}
	centaine++;
	}
	write(1, "789", 3);
}
