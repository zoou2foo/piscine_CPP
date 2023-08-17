/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:08:44 by vjean             #+#    #+#             */
/*   Updated: 2023/08/17 11:16:54 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

RPN::RPN(void)
{
	this->setOperator('\0');
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

void	RPN::setOperator(char op)
{
	this->_operator = op;
}


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	RPN::doTheMath(void)
{
	if (this->_myContainer.size() < 2)
	{
		std::cout << "Error" << std::endl;
		exit(1);
	}
	char opArray[4] = {'+', '-', '/', '*'};
	int i = 0;
	while (i < 4)
	{
		if (opArray[i] == this->_operator)
			break;
		i++;
	}
	int nb1;
	int nb2;
	int result;
	switch (i)
	{
		case 0:
			//addition of the two elements at top of stack
			nb1 = this->_myContainer.top();
			this->_myContainer.pop();
			nb2 = this->_myContainer.top();
			result = nb1 + nb2;
			this->_myContainer.push(result);
			this->setOperator('\0');
			break;
		case 1:
			//subtraction
			nb1 = this->_myContainer.top();
			this->_myContainer.pop();
			nb2 = this->_myContainer.top();
			result = nb1 - nb2;
			this->_myContainer.push(result);
			this->setOperator('\0');
			break;
		case 2:
			//division **Look if it's a division by 0 => ERROR!
			nb1 = this->_myContainer.top();
			this->_myContainer.pop();
			nb2 = this->_myContainer.top();
			if (nb2 == 0)
			{
				std::cout << "Error: division by 0 impossible" << std::endl;
				exit(1);
			}
			result = nb1 / nb2;
			this->_myContainer.push(result);
			this->setOperator('\0');
			break;
		case 3:
			//multiplication
			nb1 = this->_myContainer.top();
			this->_myContainer.pop();
			nb2 = this->_myContainer.top();
			this->_myContainer.pop();
			result = nb1 * nb2;
			this->_myContainer.push(result);
			this->setOperator('\0');
			break;
	}
}

void	RPN::executeProg(std::string rpnExp)
{
	size_t end = rpnExp.find(" ");
	std::string newExpr;
	std::string tmp;
	tmp = rpnExp.substr(0, end); //start from beginning to the space
	if (end == std::string::npos)
		newExpr = "";
	else
	{
		newExpr = rpnExp.substr(end + 1, rpnExp.length()); //newExpr starts at end(+ 1) up to the end of the string
	}
	for (unsigned long i = 0; i < tmp.length(); ++i)
	{
		char currentChar = tmp[i];
		if (isdigit(currentChar))
		{
			int	digit = std::stoi(tmp);//need to check for max int
			std::cout << digit << std::endl;
			this->_myContainer.push(digit);
		}
		else if(tmp.find_first_of("+-/*") != std::string::npos)
		{
			this->setOperator(static_cast<char>(tmp[i]));
			this->doTheMath();
		}
		else
		{
			std::cout << "Error: bad input" << std::endl;
			exit(1);
		}
	}
	if (!newExpr.empty())
			this->executeProg(newExpr);
	std::cout << "print result??" << std::endl;
}