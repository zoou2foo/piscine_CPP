/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:46:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/18 14:50:30 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <iomanip>
#include <algorithm>
#include <string>

class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const & src);
		~PmergeMe(void);

		PmergeMe&	operator=(PmergeMe const & rhs);
		void		parseSequence(int ac, char** av);
		void		startEngine(void);

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