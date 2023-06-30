/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 13:05:44 by vjean             #+#    #+#             */
/*   Updated: 2023/06/30 14:49:16 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

MateriaSource::MateriaSource(void) : _index(0)
{
	std::cout << "\033[45m" << "MateriaSource Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

//copy constructor
MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	std::cout << "\033[45m" << "MateriaSource Default Constructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

MateriaSource::~MateriaSource(void)
{
	//need to make sure to delete Materia (array)
	std::cout << "\033[45m" << "MateriaSource Destructor Called" << std::endl;
	std::cout << "\033[0m";
	return;
}

/******************************************************************************/
/*							ASSIGNATION OPERATOR							  */
/******************************************************************************/

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
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
	this->_arrayMatSrc[this->_index] = new AMateria(*learn); //something like that probably...
	this->_index++;
}

// Amateria*	MateriaSource::createMateria(std::string const & type)
// {
// 	new AMateria* copy = this->_arrayMatSrc[index];
// 	copy.setType(type); //not sure if done at the right time

// 	return (*copy);
// }