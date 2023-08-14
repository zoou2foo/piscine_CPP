/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:32:40 by vjean             #+#    #+#             */
/*   Updated: 2023/08/14 10:47:55 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

BitcoinExchange::BitcoinExchange(void)
{
	return;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src)
{
	*this = src;
}

/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

BitcoinExchange::~BitcoinExchange(void)
{
	return;
}


/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/

BitcoinExchange&	BitcoinExchange::operator=(BitcoinExchange const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this); //FIXME might need to copy more stuff **go through a loop to copy container
}


/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/




/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	BitcoinExchange::executeProg(std::ifstream& inputFile)
{
	std::string	tmp;

	std::getline(inputFile, tmp);
	std::cout << "Let's print first line: " << tmp << std::endl;
	std::getline(inputFile, tmp);
	std::cout << "Let's print second?? line: " << tmp << std::endl;
}