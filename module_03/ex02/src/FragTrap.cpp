/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:16:17 by vjean             #+#    #+#             */
/*   Updated: 2023/06/27 11:38:07 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(void) : ClapTrap() //default constructor
{
	this->setHitPts(100);
	this->setEnergyPts(100);
	this->setAttackDamage(30);
	std::cout << "Default FragTrap constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src) //copy constructor
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	return;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " destructor called (FragTrap)" << std::endl;
	return;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap&	FragTrap::operator=( FragTrap const & rhs )
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

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPts > 0 && this->_energyPts > 0)
	{
		std::cout << "\x1B[34m" << "Give me a high five!!!" << std::endl;
		std::cout << "\x1B[0m";
	}
	else
	{
		std::cout << "\x1B[34m" << "Give me a high five from the other side!!!" << std::endl;
		std::cout << "\x1B[0m";
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */