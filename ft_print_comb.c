#include <unistd.h>

int	main(void)
{
	char	centaine;
	char	dizaine;
	char	unite;

	centaine = '0';
	while (centaine < '7')
	{
		dizaine = centaine + 1;
		while (dizaine < '9')
		{
			unite = dizaine + 1;
			while (unite <= '9')
			{
				write(1, &centaine, 1);
				write(1, &dizaine, 1);
				write(1, &unite, 1);
				write(1, ",", 1);
			unite++;
			}
		dizaine++;
		}
	centaine++;
	}
	write(1, "789", 3);
}
