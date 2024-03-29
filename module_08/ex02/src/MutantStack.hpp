/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:11:59 by vjean             #+#    #+#             */
/*   Updated: 2023/08/11 08:07:22 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

template<typename T> //need to be a template to reproduce what stack does as we will just add iterator from <deque>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {}
		MutantStack(MutantStack const & src) : std::stack<T>() { *this = src; }
		~MutantStack(void) {}

		MutantStack& operator=(MutantStack const & rhs){
			if (this == &rhs)
				return (*this);
			return (*this);
		}
		class iterator
		{
			public:
				iterator(typename std::deque<T>::iterator it) : _myIterator(it) {}
				iterator(iterator const & src) : _myIterator(src._myIterator) {}
				~iterator(void) {}

				iterator&	operator++(void) { //incremente
					++this->_myIterator;
					return (*this);
				}
				iterator&	operator--(void) { //decremente. I do not need it but the main is testing if my iterator will work properly
					--this->_myIterator;
					return(*this);
				}
				T&			operator*(void) {
					return (*this->_myIterator);
				}
				bool		operator!=(iterator& rhs) {
					return (this->_myIterator != rhs._myIterator);
				}
			private:
				typename std::deque<T>::iterator	_myIterator; //the "pointer"
		};
		iterator	begin(void) {
			return (this->c.begin()); //only in adapter containers that have a c which represents a sub-container(sequential container)
		}
		iterator	end(void) {
			return (this->c.end());
		}

	private:

};


#endif