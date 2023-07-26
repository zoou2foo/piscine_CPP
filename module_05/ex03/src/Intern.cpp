/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 11:46:30 by vjean             #+#    #+#             */
/*   Updated: 2023/07/26 16:19:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Intern::Intern(void)
{
	return;
}

Intern::Intern(Intern const & src)
{
	*this = src;
	return;
}


/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Intern::~Intern(void)
{
	return;
}


/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

Intern&	Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}


/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/




/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

AForm*	Intern::makeForm(std::string name, std::string target)
{
	AForm* (Intern::*PtrMemFn[3])(std::string target) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePresidential
	};
	std::string formsArray[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	int i = 0;
	while (i < 3)
	{
		if (formsArray[i] == name)
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			return ((this->*PtrMemFn[i])(target));
			i += 1;
		case 1:
			return ((this->*PtrMemFn[i])(target));
			i += 1;
		case 2:
			return ((this->*PtrMemFn[i])(target));
			break;
		default:
			std::cout << "The form asked does not exist." << std::endl;
			return (NULL);
	}
}

AForm*	Intern::makeShrubbery(std::string target)
{
	AForm* oneForm = new ShrubberyCreationForm(target);
	std::cout << "Shrubbery Creation Form is done!" << std::endl;

	return (oneForm);
}

AForm*	Intern::makeRobotomy(std::string target)
{
	AForm* secondForm = new RobotomyRequestForm(target);
	std::cout << "Robotomy Request is done!" << std::endl;

	return (secondForm);
}

AForm*	Intern::makePresidential(std::string target)
{
	AForm* thirdForm = new PresidentialPardonForm(target);
	std::cout << "Presidential Pardon form is done!" << std::endl;

	return (thirdForm);
}