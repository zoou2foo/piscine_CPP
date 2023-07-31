/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:55:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/31 12:03:11 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Data::Data(void)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Data::Data(Data const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Data::~Data(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

Data&	Data::operator=(Data const & rhs)
{
	return (*this);
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

uintptr_t	Data::serialize(Data* ptr)
{
	//takes pointer and converts it to the unsigned integer type uintptr_t
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return (res);
}

Data*	Data::deserialize(uintptr_t raw)
{
	//takes an unsigned integer parameter and converts it to a pointer to Data
	Data* res = reinterpret_cast<Data *>(raw);
	return (res);
}
