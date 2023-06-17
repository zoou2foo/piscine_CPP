/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:45:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/17 13:03:46 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);
		int	getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _fixedComma;
		static const int _bitsNumber;
};


#endif