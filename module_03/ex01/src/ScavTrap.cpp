/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:37:10 by vjean             #+#    #+#             */
/*   Updated: 2023/06/27 11:39:09 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(void) : ClapTrap() //default constructor
{
	this->setName("SansNom");
	this->setHitPts(100);
	this->setEnergyPts(50);
	this->setAttackDamage(20);
	std::cout << "Default ScavTrap constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src) //copy constructor
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	return;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << " destructor called (ScavTrap)" << std::endl;
	return;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	this->_attackDamage = rhs.getAttackDamage();
	this->_energyPts = rhs.getEnergyPts();
	this->_hitPts = rhs.getHitPts();
	this->_name = rhs.getName();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " enters Gate Keeper mode now." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPts > 0 && this->_hitPts > 0)
	{
		this->_energyPts -= 1;
		std::cout << this->_name << " from ScavTrap attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		std::cout << this->_name << " from ScavTrap is dead. No more hit point or energy point!" << std::endl;
		return;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */