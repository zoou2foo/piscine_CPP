/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:47:53 by vjean             #+#    #+#             */
/*   Updated: 2023/07/25 11:37:32 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5), _target(target)
{
	return;
}

//Copy constructor
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Presidential Pardon", 25, 5), _target("Default")
{
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}


/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_target = rhs.getTarget();
	return (*this);
}


/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	//first check if Form signed
	//if (!this->_signed)
		//throw FormNotSigned();
	//else
		//check Bureaucrat's grade is enough to execute
		//if no throw GradeTooLow();
		//call executeForm -> only print "<target> has been pardoned by Zaphod Beeblebrox."
	std::cout << executor.getName() << " got here!" << std::endl;
}