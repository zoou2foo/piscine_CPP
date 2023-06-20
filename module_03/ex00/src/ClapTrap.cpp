/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:53:10 by vjean             #+#    #+#             */
/*   Updated: 2023/06/20 16:23:58 by vjean            ###   ########.fr       */
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

ClapTrap::ClapTrap(std::string name)
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

void	ClapTrap::attack(const std::string& target)
{
	
}