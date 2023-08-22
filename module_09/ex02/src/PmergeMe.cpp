/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:54:31 by vjean             #+#    #+#             */
/*   Updated: 2023/08/22 10:31:28 by vjean            ###   ########.fr       */
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
	return (*this);
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
}

void	PmergeMe::startEngine(void)
{
	/*FIRST CONTAINER	--	VECTOR*/
	std::cout << "---------------------------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Vector unsorted: ";
	for (std::vector<int>::iterator it = this->_myVector.begin(); it != this->_myVector.end(); ++ it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	//need to start a timer
	std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
	//Time to divide N conquer vector
	this->firstStep(this->_myVector);
	//time to stop timer
	std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
	std::chrono::microseconds durationMicroSec = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "Vector sorted: ";
	for (std::vector<int>::iterator it = this->_myVector.begin(); it != this->_myVector.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	std::cout << "It took: " << durationMicroSec.count()  << " microseconds" << std::endl;

	std::cout << "---------------------------------------------------------------------------------------------------------" << std::endl;

	/*SECOND CONTAINER	--	LIST*/
	std::cout << "List unsorted: ";
	for (std::list<int>::iterator ite = this->_myList.begin(); ite != this->_myList.end(); ++ite)
	{
		std::cout << *ite << " ";
	}
	std::cout << std::endl;
	start = std::chrono::system_clock::now();
	this->firstStep(this->_myList);
	end = std::chrono::system_clock::now();
	durationMicroSec = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
	std::cout << "List sorted: ";
	for (std::list<int>::iterator ite = this->_myList.begin(); ite != this->_myList.end(); ++ite)
	{
		std::cout << *ite << " ";
	}
	std::cout << std::endl;
	std::cout << "It took: " << durationMicroSec.count()  << " microseconds" << std::endl;
}