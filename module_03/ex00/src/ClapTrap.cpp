/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:53:10 by vjean             #+#    #+#             */
/*   Updated: 2023/06/27 08:26:04 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*****************************************************************/
/*						CONSTRUCTORS							 */
/*****************************************************************/

//Default constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _hitPts(10), _energyPts(10), _attackDamage(0)
{
	this->_name = name;
	std::cout << this->_name << " constructor called" << std::endl;
	return;
}

//Copy cosntructor
ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = src;
	return;
}


/*****************************************************************/
/*						DESTRUCTORS								 */
/*****************************************************************/

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " destructor called" << std::endl;
	return;
}

/*****************************************************************/
/*					ASSIGNATION OPERATOR						 */
/*****************************************************************/

ClapTrap& ClapTrap::operator=(ClapTrap const &copy)
{
	this->_attackDamage = copy._attackDamage;
	this->_energyPts = copy._energyPts;
	this->_hitPts = copy._hitPts;
	this->_name = copy._name;
	return (*this);
}

/*****************************************************************/
/*							SETTER								 */
/*****************************************************************/

void	ClapTrap::setHitPts(int value)
{
	this->_hitPts = value;
}

void	ClapTrap::setEnergyPts(int value)
{
	this->_energyPts = value;
}

void	ClapTrap::setAttackDamage(int value)
{
	this->_attackDamage = value;
}


/*****************************************************************/
/*							GETTER								 */
/*****************************************************************/

int	ClapTrap::getHitPts(void) const
{
	return (this->_hitPts);
}

int	ClapTrap::getEnergyPts(void) const
{
	return (this->_energyPts);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}


/*****************************************************************/
/*						MEMBER FUNCTIONS						 */
/*****************************************************************/


//need to check if still has energy to attack and have enough point
//the damage pts will be taken care of in the takeDamage member funct
void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPts > 0 && this->_hitPts > 0)
	{
		this->_energyPts -= 1;
		std::cout << this->_name << " attacks " << target << ", causing 5 points of damage!" << std::endl;
	}
	else
	{
		std::cout << this->_name << " is dead. No more hit point or energy point!" << std::endl;
		return;
	}
}

//substraction the amount of points (from amount) to hitPts add the msg
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPts > 0)
	{
		this->_attackDamage += 1;
		this->_hitPts -= amount;
		std::cout << this->_name << " has lost " << amount << " hit point(s)." << std::endl;
		std::cout << this->_name << " has now " << this->_hitPts << " hit points left!" << std::endl;
	}
	else
	{
		std::cout << this->_name << " is dead" << std::endl;
		return;
	}

}


//check if enough energy and hitPts; Adds amount to hitPts; substract 1 to energy and msg
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPts > 0 && this->_hitPts > 0)
	{
		this->_hitPts += amount;
		this->_energyPts -= 1;
		std::cout << this->_name << " has been repaired. Now, " << amount << " more hit point(s)!!" << std::endl;
		std::cout << this->_name << ": hitPts = " << this->_hitPts << std::endl;
	}
	else
	{
		std::cout << this->_name << " can't be repaired. No more energy to do it!" << std::endl;
		return;
	}
}