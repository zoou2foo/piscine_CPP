/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:35:51 by vjean             #+#    #+#             */
/*   Updated: 2023/07/03 11:47:47 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "\033[32m" << "Cure Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	(*this) = src;
	std::cout << "\033[32m" << "Cure Copy Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Cure::~Cure(void)
{
	std::cout << "\033[32m" << "Cure Destructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Cure& Cure::operator=(Cure const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

AMateria*	Cure::clone(void) const
{
	AMateria* clone = new Cure();
	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "\033[32m" << "* heals " << target.getName() << "'s wounds *" << std::endl;
	std::cout << "\033[0m";
}