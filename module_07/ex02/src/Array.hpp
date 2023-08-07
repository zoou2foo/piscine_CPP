/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:08:28 by vjean             #+#    #+#             */
/*   Updated: 2023/08/07 15:21:32 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstddef>
template<typename T>
class Array
{
	public:
		Array(void) : _size(0), _arrayElements(new T[0]) {} //Default: but need to create an empty array
		Array(unsigned int n) : _size(n), _arrayElements(new T[n]) {} //Constructor to create an array of n elements
		Array(Array const & src) : _arrayElements(NULL) {
			*this = src;
		}
		~Array(void) {
			delete [] _arrayElements;
		}

		Array&			operator=(Array const & rhs){
			if (this == &rhs)
				return (*this);
			// if (this->_size > 0)
			delete [] this->_arrayElements;
			this->_size = rhs._size;
			this->_arrayElements = new T[rhs._size];
			for (unsigned int i = 0; i < rhs._size; i++)
				this->_arrayElements[i] = rhs._arrayElements[i];
			return (*this);
		}
		T&	operator[](unsigned int index) {
			if (index >= this->_size)
				throw std::out_of_range("index out of bounds!");
			return (this->_arrayElements[index]);
		}
		unsigned int	size(void) const {
			return (this->_size);
		}

	private:
		unsigned int	_size;
		T*				_arrayElements;
};


#endif