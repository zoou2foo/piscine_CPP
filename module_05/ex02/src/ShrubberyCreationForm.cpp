/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:52:16 by vjean             #+#    #+#             */
/*   Updated: 2023/07/27 11:51:10 by vjean            ###   ########.fr       */
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

//Default
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

	//setup for the filename
	std::string fileName = this->getTarget();
	std::string fileName2 = "_shrubbery";
	std::string finalName = fileName+fileName2;
	std::ofstream newFile(finalName);
	//creation of the tree
	if (newFile.is_open())
		newFile << "         *\n        /|\\\n       /*|o\\\n      /*/|\\*\\\n     /X/O|*\\X\\\n    /*/X/|\\X\\*\\\n   /O/*/X|*\\O\\X\\\n  /*/O/X/|\\X\\O\\*\\\n /X/O/*/X|O\\X\\*\\O\\\n/O/X/*/O/|\\X\\*\\O\\X\\\n        |X|\n        |X|" << std::endl;
	else
		std::cout << "Error: Unable to create or open file " << finalName << std::endl;
}
