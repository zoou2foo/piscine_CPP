/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriejean <valeriejean@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:53:10 by vjean             #+#    #+#             */
/*   Updated: 2023/06/21 10:37:03 by valeriejean      ###   ########.fr       */
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
	if (_energyPts > 0 && _hitPts)
	{
		_hitPts -= 1;
		_energyPts -= 1;
		_attackDamage += 1;
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	
}

//substraction the amount of points (from amount) to hitPts add the msg
void	ClapTrap::takeDamage(unsigned int amount)
{
	_hitPts -= amount;
	std::cout << _name << " has now " << _hitPts << " hit points left!" << std::endl;
	
}


//check if enough energy and hitPts; Adds amount to hitPts; substract 1 to energy and msg
// void	ClapTrap::beRepaired(unsigned int amount)
// {
	
// }