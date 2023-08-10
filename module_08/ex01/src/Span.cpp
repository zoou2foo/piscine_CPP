/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:56:37 by vjean             #+#    #+#             */
/*   Updated: 2023/08/10 11:05:51 by vjean            ###   ########.fr       */
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

//addNumberAtLarge qui peut prendre un iterator(begin -> end)
//	addNumber()
void	Span::addNumberAtLarge(std::vector<int> num)
{
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	it2 = this->_element.begin();
	for (it = num.begin(); it != num.end(); ++it) //to go through my tmp vector
	{
		if (this->_element.size() == this->_cap) //if the size equals the capsize, need to stop filling up my main vector
		{
			std::cerr << "Container is FULL" << std::endl;
			break;
		}
		it2 = this->_element.insert(it2, *it); //insert new element from it, to my main vector, it2. I need to keep the "pointer" updated
		++it2; //and then moved my "pointer"
	}
	// for (std::vector<int>::iterator it3 = this->_element.begin(); it3 != this->_element.end(); ++it3)
	// {
	// 	int num = *it3;
	// 	std::cout << num << std::endl;
	// }
	// std::cout << "---------------------------------------------" << std::endl;
}


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
	std::vector<int>::iterator shortSpan;
	std::vector<int> res;
	int	finalRes = 0;

	std::sort(this->_element.begin(), this->_element.end()); //we can join std functions with containers and BOOM! MAGIC!
	std::cout << "---------------------------------------------" << std::endl;
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

int		Span::longestSpan(void)
{
	int longestSpan = 0;
	std::sort(this->_element.begin(), this->_element.end());
	int min = this->_element.front();
	int max = this->_element.back();
	longestSpan = max - min;
	return (longestSpan);
}