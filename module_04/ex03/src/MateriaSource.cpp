/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:05:44 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:28:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; ++i)
	{
		this->_arrayMatSrc[i] = NULL;
		this->_garbage[i] = NULL;
	}
	std::cout << "\033[33m" << "MateriaSource Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	std::cout << "\033[33m" << "MateriaSource Copy Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

MateriaSource::~MateriaSource(void)
{
	std::cout << "\033[33m" << "MateriaSource Destructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this == &rhs)
		return (*this);
	for(int i = 0; i < 4; ++i)
	{
		this->_arrayMatSrc[i] = rhs._arrayMatSrc[i];
	}
	return (*this);
}

/******************************************************************************/
/*							MEMBER FUNCTIONS								  */
/******************************************************************************/

void	MateriaSource::learnMateria(AMateria* learn)
{
	//copie the AMateria to store it. It will be clone later
	for (int i = 0; i < 4; ++i)
	{
		if (this->_arrayMatSrc[i] == NULL)
		{
			this->_arrayMatSrc[i] = learn;
			break;
		}
		if (i == 3)
		{
			int i = 0;
			while (this->_garbage[i] != NULL)
				i++;
			if (i < 100)
			{
				this->_garbage[i] = learn;
			}
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{

	for (int i = 0; i < 4; ++i)
	{
		if (this->_arrayMatSrc[i]->getType() == type)
		{
			return (this->_arrayMatSrc[i]->clone());
		}
	}
	return (0);
}