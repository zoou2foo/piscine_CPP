/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:56:37 by vjean             #+#    #+#             */
/*   Updated: 2023/08/09 17:05:54 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Span::Span(unsigned int N) : _element(0), _cap(N)
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
	if (this == &rhs)
		return (*this);
	//copy a vector??
	return (*this);
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/




/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	Span::addNumber(int newElement)
{
	//add verification about capacity
	if (this->_element.size() <= this->_cap)
		this->_element.push_back(newElement);
	else
	{
		std::cerr << "Container is FULL!!!" << std::endl;
		exit (-1);
	}
}

int		Span::shortestSpan(void)
{
	//calculate distance between numbers of the vector and find shortest and return it
	//go through the vector compare the distance between each element
	//keep the result in a var and compare it with the next comparaison: change the var
	//if need to be or move to the next comparaison. Continue until done through the vector
	std::vector<int>::iterator shortSpan;
	std::vector<int> res;
	int	finalRes = 0;

	std::sort(this->_element.begin(), this->_element.end()); //we can join std functions with containers and BOOM! MAGIC!
	for (std::vector<int>::iterator it = this->_element.begin(); it != this->_element.end(); ++it)
	{
		int num1 = *it;
		int num2 = *(it + 1);
		res.push_back(num2 - num1);
		if (num2 == this->_element.back())
			break ;
	}
	shortSpan = std::min_element(res.begin(), res.end());
	finalRes = *shortSpan;
	return (finalRes);
}

// int		Span::longestSpan(void)
// {
// 	//calculate distance between numbers of the vector and find shortest and return it
//	//max - min boom! Got it
// }