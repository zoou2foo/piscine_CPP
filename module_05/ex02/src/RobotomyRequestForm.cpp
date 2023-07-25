/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:50:59 by vjean             #+#    #+#             */
/*   Updated: 2023/07/25 14:52:27 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm ("Robotomy Request", 72, 45), _target(target)
{
	return;
}

//Copy Constructor
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
	return;
}

//default
RobotomyRequestForm::RobotomyRequestForm(void) : AForm ("Robotomy Request", 72, 45), _target("Default")
{
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}


/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_target = rhs.getTarget();
	return (*this);
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::cout << "biiiiiiiiizzzzzzzzzzzz (drill noise)" << std::endl;
	//need to make check that the form was sign and executor has the grade to execute
		//first check if Form signed
	//if (!this->_signed)
		//throw FormNotSigned();
	//else
		//check Bureaucrat's grade is enough to execute
		//if no throw GradeTooLow();
	//then modulo 2 for success or fail then call executeForm

	std::cout << executor.getName() << " got here!" << std::endl;
}