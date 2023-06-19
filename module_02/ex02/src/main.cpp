/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:46:18 by vjean             #+#    #+#             */
/*   Updated: 2023/06/19 15:56:08 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << a.getRawBits() << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	std::cout << "before pre: " << a.getRawBits() << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "after pre et before post: " << a.getRawBits() << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "after post: " << a.getRawBits() << std::endl;
	//std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

/* This main should return that
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016

*/