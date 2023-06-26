/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:52:49 by vjean             #+#    #+#             */
/*   Updated: 2023/06/26 09:59:18 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap firstPerson("Bob");
	ClapTrap secondPerson("George");

	if (firstPerson.getHitPts() > 0 && firstPerson.getEnergyPts() > 0)
		firstPerson.attack("George");
	else
	{
		std::cout << "There is a dead person. Game Over!" << std::endl;
		return (-1);
	}
	secondPerson.takeDamage(5);
	if (secondPerson.getHitPts() > 0 && secondPerson.getEnergyPts() > 0)
		secondPerson.attack("Bob");
	else
	{
		std::cout << "There is a dead person. Game Over!" << std::endl;
		return (-1);
	}
	firstPerson.takeDamage(5);
	if (firstPerson.getHitPts() > 0 && firstPerson.getEnergyPts() > 0)
		firstPerson.attack("George");
	else
	{
		std::cout << "There is a dead person. Game Over!" << std::endl;
		return (-1);
	}
	secondPerson.takeDamage(5);
	if (secondPerson.getHitPts() > 0 && secondPerson.getEnergyPts() > 0)
		secondPerson.attack("Bob");
	else
	{
		std::cout << "There is a dead person. Game Over!" << std::endl;
		return (-1);
	}
	firstPerson.takeDamage(5);
 

	return 0;
}

/*
main to test
	Claptrap cp1("Bob");
		Claptrap cp2(cp1);

		cp1.attack("George");
		cp1.beRepaired(1);
		cp2.attack("George");
		cp2.beRepaired(10);


*/