/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:17:43 by vjean             #+#    #+#             */
/*   Updated: 2023/06/28 16:32:57 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

AWrongAnimal::AWrongAnimal(void)
{
	this->setType("WrongAnimal");
	std::cout << "\033[31m" << "WrongAnimal Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
AWrongAnimal::AWrongAnimal(AWrongAnimal const & src)
{
	this->_type = src.getType();
	(*this) = src;
	std::cout << "\033[31m" << "WrongAnimal Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

AWrongAnimal::~AWrongAnimal(void)
{
	std::cout << "\033[31m" << "WrongAnimal Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

AWrongAnimal&	AWrongAnimal::operator=(AWrongAnimal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*									SETTER									  */
/******************************************************************************/

void	AWrongAnimal::setType(std::string type)
{
	this->_type = type;
}

/******************************************************************************/
/*									GETTER									  */
/******************************************************************************/

std::string const &	AWrongAnimal::getType(void) const
{
	return (this->_type);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void AWrongAnimal::makeSound(void) const
{
	std::cout << "\033[31m" << this->_type << " makes this sound: zzzzzzzzzzzzzz" << std::endl;
	std::cout << "\033[0m";
}