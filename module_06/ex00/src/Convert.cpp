/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:21:21 by vjean             #+#    #+#             */
/*   Updated: 2023/07/29 11:45:30 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Convert::Convert(void)
{
	std::cout << "\033[33m" << "Default Constructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

Convert::Convert(Convert const & src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Convert::~Convert(void)
{
	std::cout << "\033[31m" << "Destructor called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

Convert&	Convert::operator=(Convert const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_type = rhs.getType();
	this->_arg = rhs.getArg();
	return (*this);
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string	Convert::getType(void) const
{
	return (this->_type);
}

std::string Convert::getArg(void) const
{
	return (this->_arg);
}

void	Convert::setType(std::string type)
{
	this->_type = type;
}

void	Convert::setArg(std::string arg)
{
	this->_arg = arg;
}

/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	Convert::pseudoLit(void)
{
	if (this->_arg.compare("-inff") == 0 || this->_arg.compare("+inff") == 0 || this->_arg.compare("nanf") == 0 || this->_arg.compare("-inf") == 0 || this->_arg.compare("+inf") == 0 || this->_arg.compare("nan") == 0)
		throw PseudoLitException();

}

int	Convert::checkInt(void)
{
	//need to make sure that it's between min_int and max_int
	if (std::stoi(this->_arg) && !this->_arg.find("."))//need to fix this for the dot...
		return (0);
	else
		return (1);
}

int	Convert::checkFloat(void)
{
	if (std::stof(this->_arg))
		return (0);
	else
		return (1);
}

void	Convert::parseArg(void)
{
	if (this->_arg.length() == 1 && isdigit((int)this->_arg[0]) == 0)
		this->setType("char");
	else if (this->checkInt() == 0) //need to make sure there is not . in the number
		this->setType("int");
	else if (this->checkFloat() == 0)
		this->setType("float");
}
