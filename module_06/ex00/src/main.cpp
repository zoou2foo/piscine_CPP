/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:53:17 by vjean             #+#    #+#             */
/*   Updated: 2023/07/31 10:48:02 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

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
			nb.doConversion();
			nb.printResult();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "need an argument: char, int, float or double" << std::endl;

	return (0);
}
	