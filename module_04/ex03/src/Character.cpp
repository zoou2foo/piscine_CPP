/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:52:51 by vjean             #+#    #+#             */
/*   Updated: 2023/07/03 12:53:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

Character::Character(std::string name)
{
	this->setName(name);
	for (int i = 0; i < 4; ++i)
	{
		this->_arrayMateria[i] = NULL;
		this->_garbage[i] = NULL;
	}
	std::cout << "\033[37m" << "Character Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
Character::Character(Character const & src)
{
	//delete les Materias du Character before new replace
	(*this) = src;
	std::cout << "\033[37m" << "Character Copy Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Character::~Character(void)
{
	//need to make sure to delete Materia (array)
	for (int i = 0; i < 4; ++i)
	{
		if (this->_arrayMateria[i] != NULL && this->_garbage[i] != NULL)
		{
			delete this->_arrayMateria[i];
			delete this->_garbage[i];
		}
	}
	std::cout << "\033[37m" << "Character Destructor Called" << std::endl;
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

std::string const & Character::getName(void) const
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

// void	Character::unequip(int idx)
// {
// 	//transfer Materia to a tmp array?? to keep the address?
// 	//DO NOT delete Materia, just take it out from the inventory
// 	//Check if Materia exists. If NOT: do nothing.

// }

void	Character::equip(AMateria* m)
{
	//add the Materia in the first available/empty space in the arrayMateria
	for (int index = 0; index < 4; ++index)
	{
		if (this->_arrayMateria[index] == NULL)
		{
			this->_arrayMateria[index] = m;
			break;
		}
		if (index == 3)
		{
			std::cout << "array full" << std::endl;
			this->_garbage[index] = m;
		}
	} //how to deal with extra Materia and no space. DO NOT EXIT THE FUCKING PROGRAM
	//If not enough space, send to garbage and delete garbage at the end. Only in Character. Make sure to delete garbage in destructor
}

void	Character::use(int idx, ICharacter& target)
{
	//need to make sure that the index is on the right range
	if (idx >= 0 && idx < 4)
	{
		this->_arrayMateria[idx]->use(target);
	}
}