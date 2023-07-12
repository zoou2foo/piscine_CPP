/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:17:21 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:24:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/******************************************************************************/
/*								CONSTRUCTORS						 		  */
/******************************************************************************/

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->setType("WrongCat");
	std::cout << "\033[31m" << this->getType() << " Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	this->_type = src.getType();
	(*this) = src;
	std::cout << "\033[31m" << this->getType() << " Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

WrongCat::~WrongCat(void)
{
	std::cout << "\033[31m" << "WrongCat Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

WrongCat&		WrongCat::operator=(WrongCat const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void WrongCat::makeSound(void) const
{
	std::cout << "\033[31m" << this->_type << " makes this sound: minou minou minou!" << std::endl;
	std::cout << "\033[0m";
}