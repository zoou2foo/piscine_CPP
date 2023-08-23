/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:57:39 by vjean             #+#    #+#             */
/*   Updated: 2023/08/23 16:23:29 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av)
{
	if (ac > 2 && ac <= 3000)
	{
		PmergeMe myClass;
		myClass.parseSequence(ac, av);
		myClass.startEngine();
	}
	else
	{
		std::cout << "Error: incorrect argument. It has to be a positive integer sequence." << std::endl;
	}
	return (0);
}