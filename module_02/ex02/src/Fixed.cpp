/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 12:45:13 by vjean             #+#    #+#             */
/*   Updated: 2023/06/19 16:21:14 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*****************************************************************/
/*						CONSTRUCTORS							 */
/*****************************************************************/

//default constructor
Fixed::Fixed(void) : _fixedComma(0)
{
	//std::cout << "Default constructor called" << std::endl;
	return;
}

//int constructor
Fixed::Fixed(int const nb)
{
	//std::cout << "Int constructor called" << std::endl;
	this->_fixedComma = nb << this->_bitsNumber;
	return;
}

//float constructor
Fixed::Fixed(float const num)
{
	//std::cout << "Float constructor called" << std::endl;
	this->_fixedComma = roundf(num * (1 << this->_bitsNumber));
	return;
}

//copy constructor
Fixed::Fixed(Fixed const &rhs)
{
	*this = rhs;
	//std::cout << "Copy constructor called" << std::endl;
	return;
}

/*****************************************************************/
/*						OPERATORS OVERLOAD						 */
/*****************************************************************/

//assignation operator overload
Fixed &Fixed::operator=(Fixed const &rhs)
{
	this->_fixedComma = rhs.getRawBits(); //peut etre regarder protection
	//std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	//insert a float representation of the fixed point value number as output
	o << rhs.toFloat();
	return o;
}


/*****************************************************************/
/*					ARITHMETIC OPERATORS OVERLOAD				 */
/*****************************************************************/

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->_fixedComma + rhs.getRawBits()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->_fixedComma - rhs.getRawBits()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->_fixedComma / rhs.getRawBits()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return(Fixed(this->_fixedComma * rhs.getRawBits()));
}


/*****************************************************************/
/*				COMPARAISON OPERATORS OVERLOAD					 */
/*****************************************************************/

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->_fixedComma > rhs.getRawBits())
		return (true);
	return (false);
	//return (this->_fixedComma > rhs.getRawBits()) //autre syntax de le faire
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->_fixedComma < rhs.getRawBits())
		return (true);
	return (false);
}

Fixed& Fixed::operator++(void)
{
	//std::cout << "before: " << this->_fixedComma << std::endl;
	++this->_fixedComma;
	//std::cout << "after: " << this->_fixedComma << std::endl;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	//std::cout << "before post: " << this->_fixedComma << std::endl;
	Fixed copy(*this);
	this->_fixedComma++;
	std::cout << "COPY: " << copy._fixedComma << std::endl;
	std::cout << "THIS: " << this->_fixedComma << std::endl;
	return (copy);
}

//bool	Fixed

/*****************************************************************/
/*						DESTRUCTOR								 */
/*****************************************************************/

//destructor
Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
	return;
}



/*****************************************************************/
/*						SETTER & GETTER							 */
/*****************************************************************/

//getter
int	Fixed::getRawBits(void) const
{
	return (this->_fixedComma);
}

//setter
void	Fixed::setRawBits(int const raw)
{
	_fixedComma = raw;
}


/*****************************************************************/
/*						INT 🔁 FLOAT							 */
/*****************************************************************/

//int to float
float Fixed::toFloat(void) const
{
	return ((float)(this->_fixedComma) / (float)(1 << this->_bitsNumber));
}

//float to int
int Fixed::toInt(void) const
{
	return (this->_fixedComma >> this->_bitsNumber);
}