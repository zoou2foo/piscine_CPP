/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:55:49 by vjean             #+#    #+#             */
/*   Updated: 2023/08/01 14:11:52 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Data::Data(void) : _dataOne("bob"), _dataTwo(42), _dataThree(465)
{
	//std::cout << "Default constructor called" << std::endl;
	return;
}

Data::Data(Data const & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Data::~Data(void)
{
	//std::cout << "Destructor called" << std::endl;
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

Data&	Data::operator=(Data const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_dataOne = rhs.getDataOne();
	this->_dataTwo = rhs.getDataTwo();
	this->_dataThree = rhs.getDataThree();
	return (*this);
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string	Data::getDataOne(void) const
{
	return (this->_dataOne);
}

int	Data::getDataTwo(void) const
{
	return (this->_dataTwo);
}

size_t	Data::getDataThree(void) const
{
	return (this->_dataThree);
}

/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

uintptr_t	serialize(Data* ptr)
{
	//takes pointer and converts it to the unsigned integer type uintptr_t
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}

Data*	deserialize(uintptr_t raw)
{
	//takes an unsigned integer parameter and converts it to a pointer to Data
	Data* res = reinterpret_cast<Data *>(raw);
	return (res);
}
