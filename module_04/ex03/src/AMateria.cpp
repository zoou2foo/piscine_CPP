/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:13:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/30 14:50:41 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

AMateria::AMateria(std::string const & type)
{
	this->setType(type);
	std::cout << "\033[35m" << "AMateria Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
AMateria::AMateria(AMateria const & src)
{
	(*this) = src;
	std::cout << "\033[35m" << "AMateria Copy Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

AMateria::~AMateria(void)
{
	std::cout << "\033[35m" << "AMateria Destructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

AMateria&		AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*									GETTER									  */
/******************************************************************************/

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

/******************************************************************************/
/*									SETTER									  */
/******************************************************************************/

void	AMateria::setType(std::string type)
{
	this->_type = type;
}


/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

// AMateria*	AMateria::clone(void) const
// {
// 	//create a new instance of the same type. Ice clone ice. Cure clone cure.
// 	//new instance => new Ice() or new Cure()
// 	//AMateria* clone1 = new Ice() or AMateria* clone2 = new Cure() Do I clone both here?
// 	//do I code it here or not?
// 	if (this->getType() == "ice")
// 	{
// 		AMateria* clone = new Ice();
// 		return (clone);
// 	}
// 	else if (this->getType() == "cure")
// 	{
// 		AMateria* clone = new Cure();
// 		return (clone);
// 	}
// 	return (NULL);
// }

void	AMateria::use(ICharacter& target)
{
	//is there a check to do or is it doing ice and cure at the same time??
	if (this->getType() == "ice")
	{
		std::cout << "\033[36m" << "* shoots ice bolt at " << target.getName() << " *" << std::endl;
		std::cout << "\033[0m";
	}
	else if (this->getType() == "cure")
	{
		std::cout << "\033[32m" << "* heals " << target.getName() << "'s wounds *" << std::endl;
		std::cout << "\033[0m";
	}
}