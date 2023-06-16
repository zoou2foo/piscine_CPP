/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:25:53 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 13:53:02 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//constructor
//REF to point on Weapon club instance from the main(). Always need to have
//something in his hands.
//Param: name and address of what club points in the main()
HumanA::HumanA(std::string name, Weapon &artillery) : _artillery(artillery)
{
	HumanA::setName(name);
	return;
}

//destructor
HumanA::~HumanA(void)
{
	return;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << _artillery.getType() << std::endl;
}