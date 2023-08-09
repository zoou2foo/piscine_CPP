/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:56:37 by vjean             #+#    #+#             */
/*   Updated: 2023/08/09 10:10:33 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Span::Span(unsigned int N) : _element(N)
{
	std::cout << "Constructor Called" << std::endl;
	return;
}

Span::Span(Span const & src) //maybe need to put _element at NULL
{
	*this = src;
}

Span::Span(void)
{
	std::cout << "Default Constructor Called" << std::endl;
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Span::~Span(void)
{
	std::cout << "Destructor Called" << std::endl;
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

Span&	Span::operator=(Span const & rhs)
{
	if (*this == rhs)
		return (*this);
	//copy a vector??
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/




/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	Span::addNumber(int newElement)
{
	this->_element.push_back(newElement);
}

int		Span::shortestSpan(void) const
{
	//calculate distance between numbers of the vector and find shortest and return it
}

int		Span::longestSpan(void) const
{
	//calculate distance between numbers of the vector and find shortest and return it
}