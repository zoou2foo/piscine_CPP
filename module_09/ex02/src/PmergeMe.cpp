/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:54:31 by vjean             #+#    #+#             */
/*   Updated: 2023/08/18 14:50:48 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

PmergeMe::PmergeMe(void)
{
	return;
}

PmergeMe::PmergeMe(PmergeMe const & src)
{
	*this = src;
	return;
}


/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

PmergeMe::~PmergeMe(void)
{
	return;
}

/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

PmergeMe&	PmergeMe::operator=(PmergeMe const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this); //FIXME by the end of the ex.
}

/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/




/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	PmergeMe::parseSequence(int ac, char** av)
{
	for (int i = 1; i < ac; ++i)
	{
		try
		{
			int j = 0;
			while (av[i][j])
			{
				if (!std::isdigit(av[i][j]))
					throw ErrorMsg();
				j++;
			}
			int tmp = std::stoi(av[i]);
			//std::cout << tmp << std::endl;
			if (tmp < 0)
				throw ErrorMsg();
			this->_myVector.push_back(tmp);
			this->_myList.push_back(tmp);
		}
		catch(const std::exception& e)
		{
			(void)e;
			std::cerr << "Error: bad input" << std::endl;
			return;
		}
	}
	std::cout << "let's move to the next step" << std::endl;
}

void	PmergeMe::startEngine(void)
{
	//need to start a timer
}