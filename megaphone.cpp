#include <iostream>
#include <ctype.h>

int	main(int ac, char **av)
{
	int	i = 0;
	char c;

	if (ac >= 2)
	{
		while (av[i] && av[i] != '\0')
		{
			c = av[i];
			std::cout << toupper(c);
			++i;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return 0;
}