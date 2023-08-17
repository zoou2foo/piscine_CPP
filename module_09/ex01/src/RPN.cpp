/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:08:44 by vjean             #+#    #+#             */
/*   Updated: 2023/08/17 13:59:34 by vjean            ###   ########.fr       */
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

void	RPN::doTheMath(char op)
{
	// if (this->_myContainer.size() < 2)
	// {
	// 	std::cout << "Error" << std::endl;
	// 	exit(1);
	// }
	// char opArray[4] = {'+', '-', '/', '*'};
	// int i = 0;
	// while (i < 4)
	// {
	// 	if (opArray[i] == op)
	// 		break;
	// 	i++;
	// }
	int nb1 = this->_myContainer.top(); //from the start assigned and pop for both nb1 and nb2
	this->_myContainer.pop();
	int nb2 = this->_myContainer.top();
	this->_myContainer.pop();
	switch (op)
	{
		case '+':
			//addition of the two elements at top of stack
			this->_myContainer.push(nb1 + nb2);
			this->setOperator('\0');
			break;
		case '-':
			//subtraction
			this->_myContainer.push(nb1 - nb2);
			this->setOperator('\0');
			break;
		case '/':
			//division **Look if it's a division by 0 => ERROR!
			if (nb2 == 0)
			{
				std::cout << "Error: division by 0 impossible" << std::endl;
				exit(1);
			}
			this->_myContainer.push(nb1 / nb2);
			this->setOperator('\0');
			break;
		case '*':
			//multiplication
			this->_myContainer.push(nb1 * nb2);
			this->setOperator('\0');
			break;
	}
}

void	RPN::executeProg(std::string rpnExp)
{
	//FIXME: no need of recursion!!! Only with numbers below 10
	// size_t end = rpnExp.find(" ");
	// std::string newExpr;
	// std::string tmp;
	// tmp = rpnExp.substr(0, end); //start from beginning to the space
	// if (end == std::string::npos)
	// 	newExpr = "";
	// else
	// {
	// 	newExpr = rpnExp.substr(end + 1, rpnExp.length()); //newExpr starts at end(+ 1) up to the end of the string
	// }
	for (size_t i = 0; i < rpnExp.length(); ++i)
	{
		char currentChar = rpnExp[i];
		if (isdigit(rpnExp[i]))
		{
			int	digit = currentChar - 48; //to switch it to int
			//std::cout << digit << std::endl;
			this->_myContainer.push(digit);
		}
		else if(std::string("+-*/").find(currentChar) != std::string::npos)
		{
			if (this->_myContainer.size() < 2)
			{
				std::cout << "Error: insufficient operands for operator" << std::endl;
				return;
				//exit(1);
			}
			//this->setOperator(static_cast<char>(rpnExp[i]));
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
	// if (!newExpr.empty())
	// 		this->executeProg(newExpr);
	if (this->_myContainer.size() != 1)
	{
		std::cout << "Error: invalid RPN expression" << std::endl;
		return;
	}
	std::cout << this->_myContainer.top() << std::endl;
}

// void	RPN::printResult(void)
// {
// 	while(!this->_myContainer.empty())
// 	{
// 		int element = this->_myContainer.top();
// 		this->_myContainer.pop();
// 		std::cout << element << std::endl;
// 	}
// }