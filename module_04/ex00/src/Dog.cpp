/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:59:07 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:26:38 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Dog::Dog(void) : Animal()
{
	this->setType("Dog");
	std::cout << "\033[33m" << this->getType() << " Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

Dog::Dog(Dog const & src)
{
	this->_type = src.getType();
	(*this) = src;
	std::cout << "\033[33m" << this->getType() << " Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

Dog::~Dog(void)
{
	std::cout << "\033[33m" << this->getType() << " Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Dog&		Dog::operator=(Dog const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " makes this sound: wwwwwwwwwwwooooooooooooooooooooooooooooooooooooooffffffffffffffff!!!!!!" << std::endl;
}