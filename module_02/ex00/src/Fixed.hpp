/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:45:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/19 08:19:33 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>

class Fixed {

	public:
		Fixed(void); //default constructor
		Fixed(Fixed const &src); //constructor by copy
		~Fixed(void); //destructor

		Fixed &operator=(Fixed const &rhs); //assignation overload operator
		int	getRawBits(void) const; //getter
		void setRawBits(int const raw); //setter

	private:
		int _fixedComma; //in to store the value of the number (fixed comma)
		static const int _bitsNumber = 8; //to store the number of bits from the fractional part.
		//value will always be the literal int 8.
};


#endif