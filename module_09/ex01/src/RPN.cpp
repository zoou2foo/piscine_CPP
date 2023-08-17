/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:08:44 by vjean             #+#    #+#             */
/*   Updated: 2023/08/17 08:19:24 by vjean            ###   ########.fr       */
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
	return (*this); //FIXME at the end of exercice
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

char RPN::getOperator(void) const
{
	return (this->_operator);
}

void	RPN::setOperator(std::string operator)
{
	this->_operator = operator;
}


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	RPN::executeProg(std::string rpnExp)
{
	//this->setRPNexp(rpnExp);
	size_t end = rpnExp.find(" ");
	std::string tmp = rpnExp.substr(0, end);
	std::string newExpr = rpnExp.substr(end + 1, rpnExp.length());
	if (end == rpnExp.length())
		newExpr = "";
	for (unsigned long i = 0; i < tmp.length(); ++i)
	{
		if (tmp.find_first_of("0123456789") == std::string::npos)
		{
			std::cout << "Error: bad input" << std::endl;
			exit(1);
		}
		else if (tmp.find_first_of("+-/*"))
		{
			this->setOperator(tmp[i]);
			break;
		}
	}
	int	digit = std::stoi(tmp);
	std::cout << digit << std::endl;
	this->_myContainer.push(digit);
	while (!newExpr.empty())
		this->executeProg(newExpr);

}