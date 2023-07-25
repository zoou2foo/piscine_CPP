/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:52:16 by vjean             #+#    #+#             */
/*   Updated: 2023/07/25 16:01:55 by vjean            ###   ########.fr       */
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

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	//first check if Form signed
	this->verifyExec(executor);
	std::cout << "ok to execute" << std::endl;
	//std::cout << executor.getName() << " got here!" << std::endl;
}