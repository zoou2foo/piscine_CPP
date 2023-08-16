/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:08:44 by vjean             #+#    #+#             */
/*   Updated: 2023/08/16 13:41:38 by vjean            ###   ########.fr       */
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


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	RPN::executeProg(std::string rpnExp)
{
	this->setRPNexp(rpnExp);
	size_t end = this->_rpnExp.find(" ");
	std::string tmp = this->_rpnExp.substr(0, end);
	for (unsigned long i = 0; i < tmp.length(); ++i)
	{
		if (tmp.find_first_of("0123456789") == std::string::npos)
		{
			std::cout << "Error: bad input" << std::endl;
			exit(1);
		}
	}
	int	digit = std::stoi(tmp);
	std::cout << digit << std::endl;
}