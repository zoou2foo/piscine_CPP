/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:38:57 by valeriejean       #+#    #+#             */
/*   Updated: 2023/07/27 10:44:04 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false)
{
	//std::cout << "Form constructor called" << std::endl;
	if (gradeToSign < 1)
		throw GradeTooHighException();
	if (gradeToSign > 150)
		throw GradeTooLowException();
	this->_gradeToSign = gradeToSign;
	this->_gradeToExecute = gradeToExecute;
	return;
}

Form::Form(void)
{
	//std::cout << "Form default constructor called" << std::endl;
	return;
}

Form::Form(Form const & src)
{
	*this = src;
	//std::cout << "Form copy constructor called" << std::endl;
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Form::~Form(void)
{
	//std::cout << "Form destructor called" << std::endl;
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

Form&	Form::operator=(Form const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_gradeToSign = rhs.getGradeToSign();
	this->_gradeToExecute = rhs.getGradeToExecute();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << "'s form has the following info: grade to sign = " << rhs.getGradeToSign() << ", grade to execute = " << rhs.getGradeToExecute() << ", and the form is " << rhs.getSignedOrNot();
	return o;
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string Form::getName(void) const
{
	return (this->_name);
}

int	Form::getGradeToSign(void) const
{
	return(this->_gradeToSign);
}

int Form::getGradeToExecute(void) const
{
	return(this->_gradeToExecute);
}

std::string Form::getSignedOrNot(void) const
{
	if (this->_signed)
		return ("signed");
	else
		return ("not signed");
}


/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void	Form::beSigned(Bureaucrat& bob)
{
	if (this->_gradeToSign < bob.getGrade())
		throw Bureaucrat::GradeTooLowException();
	this->_signed = true;
}
