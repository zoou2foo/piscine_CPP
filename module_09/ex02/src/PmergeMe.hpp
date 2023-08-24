/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:46:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/24 13:49:01 by vjean            ###   ########.fr       */
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
	typename std::vector<T>::iterator itLeft = leftVec.begin();
	typename std::vector<T>::iterator itRight = rightVec.begin();

	while (itLeft != leftVec.end() && itRight != rightVec.end())
	{
		if (*itLeft < *itRight)
		{
			tmp.push_back(*itLeft);
			++itLeft;
		}
		else
		{
			tmp.push_back(*itRight);
			++itRight;
		}
	}
	//odd numbers
	tmp.insert(tmp.end(), itLeft, leftVec.end());
	tmp.insert(tmp.end(), itRight, rightVec.end());

	//time to insert back to the main vec
	typename std::vector<T>::iterator it = vec.begin();
	for (typename std::vector<T>::iterator itTmp = tmp.begin(); itTmp != tmp.end(); ++itTmp)
	{
		*it = *itTmp;
		++it;
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
	size_t length = vec.size();
	if (length <= 1) //to end recursion
		return;
	std::vector<T> leftVec(vec.begin(), (vec.begin() + length / 2));
	std::vector<T> rightVec((vec.begin() + length / 2), vec.end());

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