/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 08:52:51 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 11:54:15 by vjean            ###   ########.fr       */
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
	int	i = 0;
	while (i < 4)
	{
		delete this->_arrayMateria[i];
		i++;
	}
	i = 0;
	while (this->_garbage[i])
	{
		delete this->_garbage[i];
		i++;
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

void	Character::unequip(int idx)
{
	int i = 0;
	while (this->_garbage[i] != NULL)
		i++;
	if (i < 100)
	{
		this->_garbage[i] = this->_arrayMateria[idx];
		this->_arrayMateria[idx] = NULL;
	}
}

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
			int i = 0;
			while (this->_garbage[i] != NULL)
				i++;
			if (i < 100)
			{
				this->_garbage[i] = m;
			}
		}
	}
}

void	Character::use(int idx, ICharacter& target)
{
	//need to make sure that the index is on the right range
	if (idx >= 0 && idx < 4)
	{
		if (this->_arrayMateria[idx] != NULL)
			this->_arrayMateria[idx]->use(target);
		else
		{
			std::cout << "trying to use a null pointer!" << std::endl;
			return;
		}
	}
}