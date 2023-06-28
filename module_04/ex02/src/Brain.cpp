/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 09:37:35 by vjean             #+#    #+#             */
/*   Updated: 2023/06/28 16:21:53 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Brain::Brain(void)
{
	std::cout << "\033[36m" << "Brain Default constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Brain::Brain(Brain const & src)
{
	(*this) = src; //then move to assignation operator
	std::cout << "\033[36m" << "Brain Copy constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}


/******************************************************************************/
/*								DESTRUCTORS									  */
/******************************************************************************/

Brain::~Brain(void)
{
	std::cout << "\033[36m" << "Brain Destructor called" << std::endl;
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
	//(*this) = rhs; //shallow
	return (*this);
}