/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:27:29 by vjean             #+#    #+#             */
/*   Updated: 2023/06/12 09:30:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor
Zombie::Zombie(void) : _name("Chose")
{
	return;
}

//Destructor
Zombie::~Zombie(void)
{
	return;
}

//setter
void	Zombie::setName(std::string name)
{
	this->_name = name;
}

//getter
std::string	Zombie::getName(void) const
{
	return (this->_name);
}


void	Zombie::announce(void)
{
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}