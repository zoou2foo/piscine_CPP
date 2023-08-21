/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:46:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/21 11:26:21 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <iomanip>
#include <algorithm>
#include <chrono>
#include <string>

/*template<typename T> //TEMPLATE
T	machin(T value, T anotherValue) //can be void
{
	return (value + anotherValue) //random stuff just to get around the syntax
}*/

template<typename T>
void splitInPairs(T& container)
{
	//I'll call in function
	(void)container;
	std::cout << "in template" << std::endl;
}

template<typename T>
void	splitInPairs(std::list<T>& lst) //list
{
	//I'll use what I need for list
	(void)lst;
	std::cout << "in list" << std::endl;
}

template<typename T>
void	splitInPairs(std::vector<T>& vec) //vector
{
	//I'll use what I need for vector
	(void)vec;
	std::cout << "in vector" << std::endl;
}

// template<typename T>
// void	mergeBack(T leftCont, T rightCont, T container)
// {
// 	std::cout << "just trying stuff" << std::endl;
// }

class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		~PmergeMe(void);

		PmergeMe&	operator=(PmergeMe const & rhs);
		void		parseSequence(int ac, char** av);
		void		startEngine(void);
		/*template<typename T>
		T doSomeStuff(T valueA, T valueB) //TEMPLATE: random stuff just to get around the syntax
		{
			return (machin(valueA, valueB));
		}*/
		template<typename T>
		void	firstStep(T& container)
		{
			splitInPairs(container);
		}

		class ErrorMsg : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error");
				}
		};

	private:
	std::vector<int>	_myVector;
	std::list<int>		_myList;

};


#endif