/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:38:57 by valeriejean       #+#    #+#             */
/*   Updated: 2023/07/24 14:21:51 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

//in ex02, gradeToExecute will need to check if grade out of bounds like gradeToSign
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

//name, grade needed to sign, grade to execute (need to add it construction) and if signed or not
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
		//throw GradeTooLowException();
	this->_signed = true;
}
