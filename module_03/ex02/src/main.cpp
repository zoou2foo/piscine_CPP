/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:52:49 by vjean             #+#    #+#             */
/*   Updated: 2023/06/26 15:46:21 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap a;
	FragTrap b;

	std::cout << a.getName() << std::endl;
	b.setName("Binouche");
	std::cout << b.getName() << std::endl;
	std::cout << "SansNom attack damage = " << a.getAttackDamage() << std::endl;
	std::cout << "Binouche attack damage = " << b.getAttackDamage() << std::endl;

	return 0;
}
