/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:38:57 by valeriejean       #+#    #+#             */
/*   Updated: 2023/07/23 14:47:11 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Form::Form(std::string name) : _name(name), _signed(false)
{
	std::cout << "Form constructor called" << std::endl;
	return;
}

Form::Form(void)
{
	std::cout << "Form default constructor called" << std::endl;
	return;
}

Form::Form(Form const & src)
{
	*this = src;
	std::cout << "Form copy constructor called" << std::endl;
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Form::~Form(void)
{
	std::cout << "Fomr destructor called" << std::endl;
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

Form&	Form::operator=(Form const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

//might need to changed it to have the right thing printed
std::ostream &operator<<(std::ostream &o, Form const &rhs);
{
	o << rhs.getName() << rhs.getGrade() << std::endl;
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


/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

bool	Form::beSigned(Bureaucrat bob)
{
	
}