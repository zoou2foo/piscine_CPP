/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:53:17 by vjean             #+#    #+#             */
/*   Updated: 2023/07/28 16:06:19 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <typeinfo>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string arg = av[1];
		//first detect type passed: first check if it's pseudo-literals
		//look for: -inff, +inff, nanf (float) / -inf, +inf, nan (double)
		//FIXME: prob when inff. Keeps the f for double... maybe go with a switch for each...
		if (arg.compare("-inff") == 0 || arg.compare("+inff") == 0 ||
		arg.compare("nanf") == 0 || arg.compare("-inf") == 0 || arg.compare("+inf") == 0 ||
		arg.compare("nan") == 0)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: " << arg << "f" << std::endl;
			std::cout << "double: " << arg << std::endl;
		}
		else
		{
			std::cout << "move to the next one" << std::endl;
		}



		//second transform string to the type it is

		//finally, do conversion

	}
	else
		std::cout << "need an argument: char, int, float or double" << std::endl;
}