/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:29:59 by vjean             #+#    #+#             */
/*   Updated: 2023/06/28 09:15:17 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/******************************************************************************/
/*								CONSTRUCTORS						 		  */
/******************************************************************************/

Cat::Cat(void) : Animal()
{
	this->setType("Cat");
	std::cout << "\033[32m" << this->getType() << " Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Cat::Cat(Cat const & src) : Animal(src)
{
	this->_type = src.getType();
	(*this) = src;
	std::cout << "\033[32m" << this->getType() << " Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

Cat::~Cat(void)
{
	std::cout << "\033[32m" << this->getType() << " Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Cat&		Cat::operator=(Cat const & rhs)
{
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