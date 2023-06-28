/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:29:59 by vjean             #+#    #+#             */
/*   Updated: 2023/06/28 16:10:38 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/******************************************************************************/
/*								CONSTRUCTORS						 		  */
/******************************************************************************/

Cat::Cat(void) : AAnimal()
{
	_brain = new Brain();
	this->setType("Cat");
	std::cout << "\033[32m" << "Cat Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Cat::Cat(Cat const & src) : AAnimal(src)
{
	this->_brain = new Brain(*src._brain);
	(*this) = src;
	std::cout << "\033[32m" << "Cat Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "\033[32m" << "Cat Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Cat&		Cat::operator=(Cat const & rhs)
{
	*this->_brain = *rhs._brain;
	this->_type = rhs.getType();
	return (*this);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void Cat::makeSound(void) const
{
	std::cout << this->_type << " makes this sound: meeeeeeeeeeoooooooooooooooooooowwwwww!!!!!!!!!!" << this->_sound << std::endl;
}