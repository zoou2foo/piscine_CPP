/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:23:35 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 13:34:47 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//constructor
//As it doesn't need a weapon, it takes a NULL pointer.
HumanB::HumanB(std::string name) : _artillery(NULL)
{
	HumanB::setName(name);
	return;
}

//destructor
HumanB::~HumanB(void)
{
	return;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon *artillery)
{
	_artillery = artillery;
}

void	HumanB::attack(void)
{
	if (!_artillery)
		std::cout << this->_name  << " attacks with his fucking fists" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_artillery->getType() << std::endl;
}