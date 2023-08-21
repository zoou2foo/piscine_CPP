/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:46:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/21 16:30:21 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
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
void	sortNmerge(T& leftCont, T& rightCont, T& container)
{
	(void)leftCont;
	(void)rightCont;
	(void)container;
	std::cout << "just in template sortNmerge" << std::endl;
}

template<typename T>
void	sortNmerge(std::list<T>& leftLst, std::list<T>& rightLst, std::list<T>& lst)
{
	(void)leftLst;
	(void)rightLst;
	(void)lst;
	std::cout << "let's see if I can make it in list" << std::endl;
}

template<typename T>
void	sortNmerge(std::vector<T>& leftVec, std::vector<T>& rightVec, std::vector<T>& vec)
{
	typename std::vector<T>::iterator itMiddle = vec.begin();
	std::advance(itMiddle, vec.size() / 2);
	// typename std::vector<T>::iterator itSecondHalf = itMiddle;
	typename std::vector<T>::iterator it = vec.begin();
	typename std::vector<T>::iterator itLeft = leftVec.begin();
	typename std::vector<T>::iterator itRight = rightVec.begin();
	std::cout << "leftVec: " << *itLeft << std::endl;
	std::cout << "rightVec: " << *itRight << std::endl;
	std::cout << "main vec: " << *it << std::endl;

	// while (it != itMiddle && itSecondHalf != vec.end())
	// {
	// 	if (*itLeft < *itRight)
	// 	{
	// 		vec.push_back(*itLeft);
	// 		it++;
	// 	}
	// 	else
	// 	{
	// 		vec.push_back(*itRight);
	// 		itSecondHalf++;
	// 		it++;
	// 	}
	// }
	// while (it != itMiddle)
	// {
	// 	std::cout << "I created an infinite loop" << std::endl;
	// 	vec.push_back(*itLeft);
	// 	it++;
	// }
	// while (itSecondHalf != vec.end())
	// {
	// 	vec.push_back(*itRight);
	// 	itSecondHalf++;
	// }

	//print after sorting
	// for (it = vec.begin(); it != vec.end(); ++it)
	// {
	// 	std::cout << *it << " ";
	// }


	// for (; it != leftVec.end(); ++it)
	// 	std::cout << "what's in leftVec: " << *it << std::endl;
	// it = rightVec.begin();
	// for (; it != rightVec.end(); ++it)
	// 	std::cout << "what's in rightVec: " << *it << std::endl;
	// it = vec.begin();
	// for (; it != vec.end(); ++it)
	// 	std::cout << "what's in Vec: " << *it << std::endl;
}

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
	// std::cout << "in list" << std::endl;
	size_t length = lst.size();
	if (length <= 1) //to end recursion
		return;
	std::list<T> leftLst;
	std::list<T> rightLst;
	typename std::list<T>::iterator itMiddle = lst.begin();
	std::advance(itMiddle, lst.size() / 2);
	typename std::list<T>::iterator	itLst = lst.begin();
	for(; itLst != itMiddle; itLst++)
		leftLst.push_back(*itLst);
	for(; itLst != lst.end(); itLst++)
		rightLst.push_back(*itLst);
	splitInPairs(leftLst);
	splitInPairs(rightLst);
	sortNmerge(leftLst, rightLst, lst);
}

template<typename T>
void	splitInPairs(std::vector<T>& vec) //vector
{
	//I'll use what I need for vector
	//std::cout << "in vector" << std::endl;
	size_t length = vec.size();
	if (length <= 1) //to end recursion
		return;
	size_t	middle = length / 2;
	size_t	i = 0;
	size_t j = 0;
	std::vector<T> leftVec;
	std::vector<T> rightVec;
	for(; i < length; i++)
	{
		if (i < middle)
			leftVec.push_back(vec[i]);
		else
		{
			rightVec.push_back(vec[i]);
			j++;
		}
	}
	splitInPairs(leftVec);
	splitInPairs(rightVec);
	sortNmerge(leftVec, rightVec, vec);
	// std::cout << "can I get to the end?? Might need iterator..." << std::endl;
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