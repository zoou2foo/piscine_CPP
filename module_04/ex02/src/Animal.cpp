/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:53:40 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:22:42 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

AAnimal::AAnimal(void)
{
	this->setType("Animal");
	std::cout << "\033[35m" << "Animal Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
AAnimal::AAnimal(AAnimal const & src)
{
	//this->_type = src.getType(); repetitive; No need as it is ass op that takes care of it
	(*this) = src;
	std::cout << "\033[35m" << "Animal Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}


/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

AAnimal::~AAnimal(void)
{
	std::cout << "\033[35m" << "Animal Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}



/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

AAnimal&		AAnimal::operator=(AAnimal const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	return (*this);
}



/******************************************************************************/
/*									SETTER									  */
/******************************************************************************/

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}

/******************************************************************************/
/*									GETTER									  */
/******************************************************************************/

std::string const	AAnimal::getType(void) const
{
	return (this->_type);
}


/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void AAnimal::makeSound(void) const
{
	std::cout << this->_type << " makes this sound: aaaaaarrrrrrrrrrrrrrrrrrgggggghhhhhhhuuuuuurrrrrrgggghhhh!" << std::endl;
}