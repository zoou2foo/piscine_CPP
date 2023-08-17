/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:08:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/17 15:38:18 by vjean            ###   ########.fr       */
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
	}
	else if (ac > 2)
		std::cout << "Error: you need to put the RPN expression between double quotes" << std::endl;
	else if (ac < 2)
		std::cout << "Error: need to add a RPN expression" << std::endl;
	return (0);
}