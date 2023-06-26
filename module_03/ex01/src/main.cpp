/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:52:49 by vjean             #+#    #+#             */
/*   Updated: 2023/06/26 15:05:45 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{

	ScavTrap a;
	ScavTrap b(a);

	b.setName("Binouche");
	std::cout << "\x1B[35m" << "First attack" << std::endl;
	std::cout << "\x1B[0m";
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	std::cout << "\x1B[35m" << "Second attack" << std::endl;
	std::cout << "\x1B[0m";
	b.attack(a.getName());
	a.takeDamage(20);
	std::cout << "\x1B[35m" << "Third attack" << std::endl;
	std::cout << "\x1B[0m";
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "\x1B[35m" << "Fourth attack" << std::endl;
	std::cout << "\x1B[0m";
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "\x1B[35m" << "Fifth attack" << std::endl;
	std::cout << "\x1B[0m";
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "\x1B[35m" << "Sixth attack" << std::endl;
	std::cout << "\x1B[0m";
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "\x1B[35m" << "LAST CALL" << std::endl;
	std::cout << "\x1B[0m";
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	std::cout << "\x1B[35m" << "Trying to get better..." << std::endl;
	std::cout << "\x1B[0m";
	std::cout << b.getName() << " has " << b.getHitPts() << " hit points!" << std::endl;
	b.beRepaired(10);
	a.beRepaired(10);
	b.guardGate();
	std::cout << "\x1B[35m" << "END" << std::endl;
	std::cout << "\x1B[0m";

	return 0;
}
