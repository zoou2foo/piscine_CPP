/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:59:07 by vjean             #+#    #+#             */
/*   Updated: 2023/06/28 16:13:43 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Dog::Dog(void) : AAnimal()
{
	_brain = new Brain();
	this->setType("Dog");
	std::cout << "\033[33m" << "Dog Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Dog::Dog(Dog const & src)
{
	this->_brain = new Brain(*src._brain);
	(*this) = src;
	std::cout << "\033[33m" << "Dog Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "\033[33m" << "Dog Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Dog&	Dog::operator=(Dog const & rhs)
{
	*this->_brain = *rhs._brain;
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