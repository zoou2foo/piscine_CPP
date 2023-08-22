/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:08:44 by vjean             #+#    #+#             */
/*   Updated: 2023/08/22 10:58:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

RPN::RPN(void)
{
	return;
}

RPN::RPN(RPN const & src)
{
	*this = src;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

RPN::~RPN(void)
{
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

RPN&	RPN::operator=(RPN const & src)
{
	if (this == &src)
		return (*this);
	this->_rpnExp = src.getRPNexp();
	return (*this);
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string	RPN::getRPNexp(void) const
{
	return (this->_rpnExp);
}

void	RPN::setRPNexp(std::string rpnExp)
{
	this->_rpnExp = rpnExp;
}

/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	RPN::doTheMath(char op)
{
	int nb2 = this->_myContainer.top();
	this->_myContainer.pop();
	int nb1 = this->_myContainer.top();
	this->_myContainer.pop();
	switch (op)
	{
		case '+':
			//addition of the two elements at top of stack
			this->_myContainer.push(nb1 + nb2);
			break;
		case '-':
			//subtraction
			this->_myContainer.push(nb1 - nb2);
			break;
		case '/':
			//division
			if (nb2 == 0)
			{
				std::cout << "Error: division by 0 impossible" << std::endl;
				exit(1);
			}
			this->_myContainer.push(nb1 / nb2);
			break;
		case '*':
			//multiplication
			this->_myContainer.push(nb1 * nb2);
			break;
	}
}

void	RPN::executeProg(std::string rpnExp)
{
	for (size_t i = 0; i < rpnExp.length(); ++i)
	{
		char currentChar = rpnExp[i];
		if (isdigit(rpnExp[i]))
		{
			int	digit = currentChar - 48; //to switch it to int
			this->_myContainer.push(digit);
		}
		else if(std::string("+-*/").find(currentChar) != std::string::npos)
		{
			if (this->_myContainer.size() < 2)
			{
				std::cout << "Error: insufficient operands for operator" << std::endl;
				return;
			}
			this->doTheMath(currentChar);
		}
		else if (currentChar == ' ')
			continue;
		else
		{
			std::cout << "Error: bad input" << std::endl;
			return;
		}
	}
	if (this->_myContainer.size() != 1)
	{
		std::cout << "Error: invalid RPN expression" << std::endl;
		return;
	}
	std::cout << this->_myContainer.top() << std::endl;
}
