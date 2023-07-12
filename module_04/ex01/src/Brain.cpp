/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 09:37:35 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:12:04 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Brain::Brain(void)
{
	std::cout << "\033[35m" << "Brain Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Brain::Brain(Brain const & src)
{
	(*this) = src;
	std::cout << "\033[35m" << "Brain  Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}


/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

Brain::~Brain(void)
{
	std::cout << "\033[35m" << "Brain Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}



/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Brain&		Brain::operator=(Brain const & rhs)
{
	//check for self-assignment
	if (this == &rhs)
		return (*this);
	for (int i = 0; !this->_ideas[i].empty(); ++i)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	//(*this) = rhs; //shallow copy
	return (*this);
}