/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:28:22 by vjean             #+#    #+#             */
/*   Updated: 2023/07/24 09:16:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	// std::cout << "\033[31m" << this->_name << " Bureaucrat Constructor Called" << std::endl;
	// // std::cout << "\033[0m";
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;

	return;
}

Bureaucrat::Bureaucrat(void)
{
	std::cout << "\033[35m" << "Bureaucrat Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
	// std::cout << "\033[35m" << "Bureaucrat Copy Constructor Called" << std::endl;
	// std::cout << "\033[0m";
	return;
}


/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Bureaucrat::~Bureaucrat(void)
{
	//std::cout << "\033[35m" << "Bureaucrat Destructor Called" << std::endl;
	// std::cout << "\033[0m";
	return;
}


/******************************************************************************/
/*					ASSIGNATION & OVERLOAD OPERATOR							  */
/******************************************************************************/

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << " bureaucrat grade " << rhs.getGrade();
	return o;
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		if (this->_grade == 150)
			throw GradeTooLowException();
		this->_grade += 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	Bureaucrat::decrementeGrade(void)
{
	try
	{
		if (this->_grade == 1)
			throw GradeTooHighException();
		this->_grade -= 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
