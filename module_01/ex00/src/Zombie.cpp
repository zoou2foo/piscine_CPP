/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:27:29 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 12:59:05 by vjean            ###   ########.fr       */
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
	std::cout << this->_name << ": Destructor called" << std::endl;
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