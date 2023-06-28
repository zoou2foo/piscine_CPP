/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:53:40 by vjean             #+#    #+#             */
/*   Updated: 2023/06/28 13:37:17 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Animal::Animal(void)
{
	this->setType("Animal");
	std::cout << "\033[35m" << "Animal Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Animal::Animal(Animal const & src)
{
	//this->_type = src.getType(); repetitive
	(*this) = src;
	std::cout << "\033[35m" << "Animal Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}


/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

Animal::~Animal(void)
{
	std::cout << "\033[35m" << "Animal Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}



/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Animal&		Animal::operator=(Animal const & rhs)
{
	this->_type = rhs.getType();
	return (*this);
}



/******************************************************************************/
/*									SETTER									  */
/******************************************************************************/

void	Animal::setType(std::string type)
{
	this->_type = type;
}

/******************************************************************************/
/*									GETTER									  */
/******************************************************************************/

std::string const	Animal::getType(void) const
{
	return (this->_type);
}


/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void Animal::makeSound(void) const
{
	std::cout << this->_type << " makes this sound: aaaaaarrrrrrrrrrrrrrrrrrgggggghhhhhhhuuuuuurrrrrrgggghhhh!" << std::endl;
}