/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:53:10 by vjean             #+#    #+#             */
/*   Updated: 2023/06/20 15:50:45 by vjean            ###   ########.fr       */
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
/*						SETTER & GETTER							 */
/*****************************************************************/

int	ClapTrap::getValue(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setValue(int amount)
{
	this->_attackDamage = amount;
}


/*****************************************************************/
/*						MEMBER FUNCTIONS						 */
/*****************************************************************/