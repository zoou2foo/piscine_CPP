/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:16:17 by vjean             #+#    #+#             */
/*   Updated: 2023/06/26 15:43:21 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(void) : ClapTrap() //default constructor
{
	this->_hitPts = 100;
	this->_energyPts = 100;
	this->_attackDamage = 30;
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
	this->_attackDamage = rhs._attackDamage;
	this->_energyPts = rhs._energyPts;
	this->_hitPts = rhs._hitPts;
	this->_name = rhs._name;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\x1B[34m" << "Give me a high five!!!" << std::endl;
	std::cout << "\x1B[0m";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */