/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:11:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/10 12:47:59 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template<typename T> //need to be a template to reproduce what stack does as we will just add iterator from deque
class MutantStack : public std::deque<T> std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutanStack const & src) : std::stack<T>() { *this = src; }
		~MutantStack(void) {}

		MutantStack& operator=(MutantStack const & rhs){
			if (this == &rhs)
				return (*this);
			//might need to copy some stuff here
			return (*this);
		}
		//std::stack<T>			_box;


	private:

};


#endif