/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:52:16 by vjean             #+#    #+#             */
/*   Updated: 2023/07/25 11:15:02 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

//need to call constructor of AForm to create the Shrubbery Creation Form.
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
	return;
}

//copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
	return;
}

//Default. Might not need to code it
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery Creation Form", 145, 137), _target("Default")
{
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}


/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_target = rhs.getTarget();
	return (*this);
}


/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}



/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	//first check if Form signed
	//if (!this->_signed)
		//throw FormNotSigned();
	//else
		//check Bureaucrat's grade is enough to execute
		//if no throw GradeTooLow();
		//call executeForm
	std::cout << executor.getName() << " got here!" << std::endl;
}