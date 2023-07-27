/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:38:57 by valeriejean       #+#    #+#             */
/*   Updated: 2023/07/27 11:59:25 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false)
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

AForm::AForm(void) : _name("Default"), _gradeToSign(1), _gradeToExecute(150), _signed(false)
{
	//std::cout << "Form default constructor called" << std::endl;
	return;
}

AForm::AForm(AForm const & src)
{
	*this = src;
	//std::cout << "Form copy constructor called" << std::endl;
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

AForm::~AForm(void)
{
	//std::cout << "Form destructor called" << std::endl;
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

AForm&	AForm::operator=(AForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_gradeToSign = rhs.getGradeToSign();
	this->_gradeToExecute = rhs.getGradeToExecute();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
	o << rhs.getName() << "'s form has the following info: grade to sign = " << rhs.getGradeToSign() << ", grade to execute = " << rhs.getGradeToExecute() << ", and the form is " << rhs.getSignedOrNot();
	return o;
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string AForm::getName(void) const
{
	return (this->_name);
}

int	AForm::getGradeToSign(void) const
{
	return(this->_gradeToSign);
}

int AForm::getGradeToExecute(void) const
{
	return(this->_gradeToExecute);
}

std::string AForm::getSignedOrNot(void) const
{
	if (this->_signed)
		return ("signed");
	else
		return ("not signed");
}


/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void	AForm::beSigned(Bureaucrat& bob)
{
	if (this->_gradeToSign < bob.getGrade())
		throw Bureaucrat::GradeTooLowException();
	this->_signed = true;
}


void	AForm::verifyExec(Bureaucrat const & executor) const
{
	if (!this->_signed)
		throw FormNotSigned();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
}