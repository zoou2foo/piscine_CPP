/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:45:13 by vjean             #+#    #+#             */
/*   Updated: 2023/06/20 11:56:17 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default constructor
Fixed::Fixed(void) : _fixedComma(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

//copy constructor
Fixed::Fixed(Fixed const &rhs)
{
	*this = rhs; //copy to the current instance
	std::cout << "Copy constructor called" << std::endl;
	return;
}

//destructor
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

//assignation operator overload
Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called " << std::endl;

	this->_fixedComma = rhs.getRawBits();
	return (*this);
}

//getter
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedComma);
}

//setter
void	Fixed::setRawBits(int const raw)
{
	_fixedComma = raw;
}