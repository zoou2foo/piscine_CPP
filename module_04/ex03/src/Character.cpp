/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:52:51 by vjean             #+#    #+#             */
/*   Updated: 2023/06/30 11:46:48 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Character::Character(std::string name)
{
	this->setName(name);
	std::cout << "\033[33m" << "Character Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Character::Character(Character const & src)
{
	//delete les Materias du Character before new replace
	(*this) = src;
	std::cout << "\033[35m" << "Character Copy Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Character::~Character(void)
{
	//need to make sure to delete Materia (array)
	std::cout << "\033[35m" << "Character Destructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

Character& Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	return (*this);
}

/******************************************************************************/
/*									GETTER									  */
/******************************************************************************/

std::string const & ICharacter::getName(void) const
{
	return (this->_name);
}

/******************************************************************************/
/*									SETTER									  */
/******************************************************************************/

void	Character::setName(std::string name)
{
	this->_name = name;
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void	ICharacter::unequip(int idx)
{
	//transfer Materia to a tmp array?? to keep the address?
	//DO NOT delete Materia, just take it out from the inventory
	//Check if Materia exists. If NOT: do nothing.

}

void	ICharacter::equip(AMateria* m)
{
	//add the Materia in the first available/empty space in the arrayMateria
	for (int index = 0; index < 4; ++index)
	{
		if (this->_arrayMateria[index].empty()) //FIXME
		{
			this->_arrayMateria[index] = m; //FIXME
		}
		//if full return without doing anything
	}
}

void	ICharacter::use(int idx, ICharacter& target)
{
	//your character needs to know which Materia it has to use. Then it needs
	//to know its target
	//Need to getType at the idx and send this info to AMateria::use to know which
	//msg to send
	this->_arrayMateria[idx].getType(); //and do some shit with this
}