/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:21:21 by vjean             #+#    #+#             */
/*   Updated: 2023/07/31 10:49:11 by vjean            ###   ########.fr       */
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
	int flag = -1;
	for (unsigned long i = 0; i < this->_arg.length(); i++)
	{
		if (this->_arg[i] == '.' || this->_arg[i] == 'f')
				return (1);
	}
	try
	{
		std::stoi(this->_arg);
		flag = 0;
	}
	catch(const std::exception& e)
	{
		(void)e;
		this->_stoiNotWorking = 1;
		flag = 1;
	}
	if (flag == 0)
		return (0);
	else
		return (1);
}

int	Convert::checkFloat(void)
{
	int f = 0;
	for (unsigned long i = 0; i < this->_arg.length(); i++)
	{
		if (this->_arg[i] == 'f')
			f += 1;
	}
	if (f == 1 && this->_arg[this->_arg.length() - 1] == 'f')
	{
		if (std::stof(this->_arg))
			return (0);
		else
			return (1);
	}
	else
		return (1);
}

int	Convert::checkDouble(void)
{
	int dot = 0;
	int f = 0;
	for (unsigned long i = 0; i < this->_arg.length(); i++)
	{
		if (this->_arg[i] == '.')
			dot += 1;
		else if (this->_arg[i] == 'f')
			f += 1;
	}
	if (f == 0 && dot == 1)
	{
		if (std::stod(this->_arg))
			return (0);
		else
			return (1);
	}
	else
		return (1);
}

void	Convert::parseArg(void)
{
	if (this->_arg.length() == 1 && isdigit((int)this->_arg[0]) == 0)
	{
		this->_resChar = this->_arg[0];
		this->setType("char");
	}
	else if (this->checkInt() == 0)
	{
		this->_resInt = std::stoi(this->_arg);
		this->setType("int");
	}
	else if (this->checkFloat() == 0)
	{
		this->_resFloat = std::stof(this->_arg);
		this->setType("float");
	}
	else if (this->checkDouble() == 0)
	{
		this->_resDouble = std::stod(this->_arg);
		this->setType("double");
	}
}

void	Convert::doConversion(void)
{
	std::string typeArrays[4] = { "char", "int", "float", "double" };

	int i = 0;
	while (i < 4)
	{
		if (typeArrays[i] == this->getType())
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			this->_resInt = static_cast<int>(this->_resChar);
			this->_resFloat = static_cast<float>(this->_resChar);
			this->_resDouble = static_cast<double>(this->_resChar);
			break;
		case 1:
			this->_resChar = static_cast<char>(this->_resInt);
			this->_resFloat = static_cast<float>(this->_resInt);
			this->_resDouble = static_cast<double>(this->_resInt);
			break;
		case 2:
			this->_resChar = static_cast<char>(this->_resFloat);
			this->_resInt = static_cast<int>(this->_resFloat);
			this->_resDouble = static_cast<double>(this->_resFloat);
			break;
		case 3:
			this->_resChar = static_cast<char>(this->_resDouble);
			this->_resInt = static_cast<int>(this->_resDouble);
			this->_resFloat = static_cast<float>(this->_resDouble);
			break;
	}
}

void	Convert::printResult(void)
{
	if ((this->_resInt >= 0 && this->_resInt <= 32) || this->_resInt == 127)
		std::cout << "char: non displayable" << std::endl;
	else if (this->_resInt > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << this->_resChar << std::endl;
	if (this->_stoiNotWorking == 1)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_resInt << std::endl;
	std::cout << "float: " << std::setprecision(1) << std::fixed << this->_resFloat << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << std::fixed << this->_resDouble << std::endl;
}