/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:08:13 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:28:27 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "\033[36m" << "Ice Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	(*this) = src;
	std::cout << "\033[36m" << "Ice Copy Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Ice::~Ice(void)
{
	std::cout << "\033[36m" << "Ice Destructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Ice& Ice::operator=(Ice const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

AMateria*	Ice::clone(void) const
{
	AMateria* clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "\033[36m" << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cout << "\033[0m";
}
