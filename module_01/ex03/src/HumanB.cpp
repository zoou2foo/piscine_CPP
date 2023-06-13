/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:23:35 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 16:39:21 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//constructor
HumanB::HumanB(std::string name) : _artillery(NULL) //pointeur parce que l'arme peut etre null. Weapon _artillery has to be initialize in constructor
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