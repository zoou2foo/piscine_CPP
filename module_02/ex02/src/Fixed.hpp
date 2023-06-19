/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:45:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/19 16:25:20 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <algorithm>
#include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(int const nb);
		Fixed(float const num);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);

		Fixed operator+(Fixed const &rhs) const; //new, ref, pointer???
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		Fixed& operator++(void); //prefix increment (++num)
		Fixed operator++(int); //postfix increment (num++)

		int	getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		//four public overloaded member functions
		// int &min(int nb); //j'utilise le retour de mon bool pour renvoyer la bonne reponse
		// int &min(int const num);
		// int &max(int nb);
		// int &max(int const num);

	private:
		int _fixedComma;
		static const int _bitsNumber = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs); //need to verify this...

#endif