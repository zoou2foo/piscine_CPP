/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:46:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/24 11:57:57 by vjean            ###   ########.fr       */
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

template<typename T>
void	sortNmerge(T& leftCont, T& rightCont, T& container)
{
	(void)leftCont;
	(void)rightCont;
	(void)container;
}

template<typename T>
void	sortNmerge(std::list<T>& leftLst, std::list<T>& rightLst, std::list<T>& lst)
{
	typename std::list<T>::iterator it = lst.begin();
	typename std::list<T>::iterator itLeft = leftLst.begin();
	typename std::list<T>::iterator itRight = rightLst.begin();

	while (itLeft != leftLst.end() && itRight != rightLst.end())
	{
		if (*itLeft < *itRight)
		{
			*it = *itLeft;
			itLeft++;
		}
		else
		{
			*it = *itRight;
			itRight++;
		}
		it++;
	}
	while (itLeft != leftLst.end())
	{
		*it = *itLeft;
		itLeft++;
		it++;
	}
	while (itRight != rightLst.end())
	{
		*it = *itRight;
		itRight++;
		it++;
	}
}

template<typename T>
void	sortNmerge(std::vector<T>& leftVec, std::vector<T>& rightVec, std::vector<T>& vec)
{
	std::vector<T> tmp;
	typename std::vector<T>::iterator it = vec.begin();
	typename std::vector<T>::iterator itLeft = leftVec.begin();
	typename std::vector<T>::iterator itRight = rightVec.begin();
	// typename std::vector<T>::iterator itTmp = tmp.begin();
	// typename std::vector<T>::iterator itTmp2 = tmp.begin();

	// std::cout << "itLeft pointe quoi: " << *itLeft << std::endl;
	// std::cout << "itLeft + 1 pointe quoi: " << *(itLeft + 1) << std::endl;
	// std::cout << "itRight pointe quoi: " << *itRight << std::endl;
	// std::cout << "itRight + 1 pointe quoi: " << *(itRight + 1) << std::endl;
	while (itLeft != leftVec.end() && itRight != rightVec.end())
	{
		if (*itLeft > *(++itLeft))//maybe segfault
		{
			// *itTmp = *itLeft;
			// *itLeft = *(itLeft + 1);
			// *(itLeft + 1) = *itTmp;
			tmp.push_back(*(--itLeft));
			tmp.push_back(*(++itLeft));
			leftVec.pop_back();
			leftVec.pop_back();
			leftVec.push_back(tmp.back());
			leftVec.push_back(tmp.front());
			tmp.pop_back();
			tmp.pop_back();
		}
		if (*itRight > *(++itRight))
		{
			// *itTmp = *itRight;
			// *itRight = *(itRight + 1);
			// *(itRight + 1) = *itTmp;
			tmp.push_back(*(--itRight));
			tmp.push_back(*(++itRight));
			rightVec.pop_back();
			rightVec.pop_back();
			rightVec.push_back(tmp.back());
			rightVec.push_back(tmp.front());
			tmp.pop_back();
			tmp.pop_back();
		}
		if (*itLeft < *itRight)
		{
			// *it = *itLeft;
			// itLeft++;
			vec.insert(it, *itLeft); //
			leftVec.erase(itLeft);
			//itLeft++;
		}
		else
		{
			*it = *itRight;
			itRight++;
		}
		it++;
	}
	while (itLeft != leftVec.end())
	{
		*it = *itLeft;
		itLeft++;
		it++;
	}
	while (itRight != rightVec.end())
	{
		*it = *itRight;
		itRight++;
		it++;
	}
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
	size_t length = lst.size();
	if (length <= 1)
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
	std::vector<T> leftVec;
	std::vector<T> rightVec;
	size_t length = vec.size();
	if (length <= 2) //to end recursion
		return;
	size_t	middle = length / 2;
	size_t	i = 0;
	size_t j = 0;
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
}


class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		~PmergeMe(void);

		void		parseSequence(int ac, char** av);
		void		startEngine(void);

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
	PmergeMe&	operator=(PmergeMe const & rhs);
	std::vector<int>	_myVector;
	std::list<int>		_myList;

};


#endif