/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:17:43 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:24:32 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

WrongAnimal::WrongAnimal(void)
{
	this->setType("WrongAnimal");
	std::cout << "\033[31m" << this->getType() << " Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	this->_type = src.getType();
	(*this) = src;
	std::cout << "\033[31m" << this->getType() << "  Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "\033[31m" << "WrongAnimal Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

WrongAnimal&		WrongAnimal::operator=(WrongAnimal const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*									SETTER									  */
/******************************************************************************/

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

/******************************************************************************/
/*									GETTER									  */
/******************************************************************************/

std::string const &	WrongAnimal::getType(void) const
{
	return (this->_type);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void WrongAnimal::makeSound(void) const
{
	std::cout << "\033[31m" << this->_type << " makes this sound: zzzzzzzzzzzzzz" << std::endl;
	std::cout << "\033[0m";
}