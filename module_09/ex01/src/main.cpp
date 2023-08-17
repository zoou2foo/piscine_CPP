/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:08:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/17 13:47:49 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char** av)
{
	if (ac == 2)
	{
		std::string rpnExp = av[1];
		RPN	myClass;
		myClass.executeProg(rpnExp);
		//myClass.printResult();
		//std::cout << "let's start this shit" << std::endl; //print the result from stack
	}
	else if (ac > 2)
		std::cout << "Error: you need to put the RPN expression between double quotes" << std::endl;
	else if (ac < 2)
		std::cout << "Error: need to add a RPN expression" << std::endl;
	return (0);
}