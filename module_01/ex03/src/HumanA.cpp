/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:25:53 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 16:33:31 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//constructor
HumanA::HumanA(std::string name, Weapon &artillery) : _artillery(artillery) //reference va pointer sur l'instance de Weapon club dans le main; parce qu'il est toujours obligé d'avoir de quoi dans les mains. Il prend l'adresse que club pointait dans le main
{
	//may need to have a checkup to look if the reference is empty (not null)
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