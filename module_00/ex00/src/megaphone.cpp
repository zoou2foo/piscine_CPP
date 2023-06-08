#include <iostream>
#include <ctype.h>

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac >= 2)
	{
		while (av[i])
		{
			while (av[i][j])
			{
				std::cout << char(toupper(av[i][j]));
				j++;

			}
			i++;
			j = 0;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return 0;
}