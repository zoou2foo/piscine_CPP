/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:50:59 by vjean             #+#    #+#             */
/*   Updated: 2023/07/26 10:40:04 by vjean            ###   ########.fr       */
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
	this->verifyExec(executor);
	//then modulo 2 for success or fail then call executeForm
	srand(time(NULL)); //to initialize random before calling the function rand()
	int randomNo = rand() % 100 + 1;
	if (randomNo % 2 == 0)
	{
		std::cout << "\033[33m" << "biiiiiiiiizzzzzzzzzzzz (drill noise)" << std::endl;
		std::cout << "\033[32m" << this->getTarget() << " has been robotomized!" << std::endl;
		std::cout << "\033[0m";
	}
	else
	{
		std::cout << "\033[31m" << "FAIL to robotomize " << this->getTarget() << "!" << std::endl;
		std::cout << "\033[0m";
	}
}