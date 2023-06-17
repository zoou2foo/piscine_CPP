/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:45:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/17 14:49:27 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(int const ); //QUESTION: constructor taking an int const and convert it in fixed comma...
		Fixed(float const num); //QUESTION: constructor with const float and convert it in fixed comma...
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _fixedComma;
		static const int _bitsNumber;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs); //need to verify this...

#endif