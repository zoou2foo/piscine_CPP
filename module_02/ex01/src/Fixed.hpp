/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:45:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/20 11:57:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const num);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);
		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _fixedComma;
		static const int _bitsNumber = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif