/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 11:53:17 by vjean             #+#    #+#             */
/*   Updated: 2023/07/29 16:08:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

//COMMENT: maybe better to create class to keep in a variable the type of string
//and keep somewhere what to print according to type by static_cast<>
//still need to first to take care of pseudo-literals and then, char

//TODO: probably need to add a try and catch if character not displayable or impossible
//TODO: also need to figure out to catch stoi/stof/stod errors

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
			nb.printResult(); //need to do a try catch if not displayable character or impossible if not ASCII
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