/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:53:17 by vjean             #+#    #+#             */
/*   Updated: 2023/07/29 11:23:41 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//COMMENT: maybe better to create class to keep in a variable the type of string
//and keep somewhere what to print according to type by static_cast<>
//still need to first to take care of pseudo-literals and then, char

int main(int ac, char **av)
{
	Convert nb;
	if (ac == 2)
	{
		std::string arg = av[1];
		nb.setArg(arg);
		try
		{
			nb.pseudoLit();
			nb.parseArg();
			std::cout << nb.getType() << std::endl;
			std::cout << "will need a print function" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		//second transform string to the type it is

		//finally, do conversion

	}
	else
		std::cout << "need an argument: char, int, float or double" << std::endl;

	return (0);
}