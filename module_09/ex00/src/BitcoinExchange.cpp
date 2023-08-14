/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:32:40 by vjean             #+#    #+#             */
/*   Updated: 2023/08/14 15:27:44 by vjean            ###   ########.fr       */
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

float	BitcoinExchange::getValue(void) const
{
	return (this->_value);
}

void	BitcoinExchange::setValue(float value)
{
	this->_value = value;
}

std::string	BitcoinExchange::getDate(void) const
{
	return (this->_date);
}

void	BitcoinExchange::setDate(std::string date)
{
	this->_date = date;
}


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

void	BitcoinExchange::checkDate(std::string tmp)
{
	size_t dateEnd = tmp.find("|") - 1;
	std::string date = tmp.substr(dateEnd, 10);
	for (int i = 0; i < 10; ++i)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
			{
				throw ErrorDate();
				exit (-1);
				//std::cerr << "Error: incorrect date format" << std::endl;
				//probably need to move on to the next? ...
			}
		}
		else if (!std::isdigit(date[i]))
		{
			throw ErrorDate();
			//std::cerr << "Error: invalid date" << std::endl;
		}
	}
	std::cout << "checkDate passed" << std::endl;

}

void	BitcoinExchange::checkMiddle(std::string tmp)
{
	//check for space and pipe to separate date and value
	if (tmp.find_first_of(" | ") == std::string::npos)
	{
		std::cerr << "no space and pipe" << std::endl;
	}
	else
	{
		std::cout << "checkMiddle passed" << std::endl;
	}
}

void	BitcoinExchange::checkValue(std::string tmp)
{
	//check that the last part is an positive int or float and not higher than 1000.
	size_t valueStart = tmp.find("|") + 1;
	size_t valueLength = tmp.length() - valueStart;
	std::string stringValue = tmp.substr(valueStart, valueLength);
	float value = std::stof(stringValue);
	if (value < 0 && value > 1000)
	{
		std::cerr << "Error: value needs to be between 0 and 1000" << std::endl;
	}
	else
	{
		this->setValue(value);
		std::cout << "check Value passed" << std::endl;
	}

}

void	BitcoinExchange::moveToContainer(std::string tmp)
{
	//have the key: date only and ADD => copy only the first 10 characters + add space + add => + add space
	//have the int: stoi the value, the last element of tmp
	//this->_myContainer.insert(std::pair<string, int>(str, int))
	(void)tmp;
	std::cout << "time to move in container" << std::endl;
}

void	BitcoinExchange::executeProg(std::ifstream& inputFile)
{
	std::string	tmp;

	std::getline(inputFile, tmp);
	if (tmp.compare("date | value") != 0)
	{
		std::cerr << "Error: with the header of the file. File might be corrupted" << std::endl;
		//exit or not???
	}
	while (std::getline(inputFile, tmp))
	{
		try
		{
			checkDate(tmp);
			checkMiddle(tmp);
			checkValue(tmp);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		moveToContainer(tmp);
		// if (!this->parseTmp(tmp))
		// {
		// 	//then move the line to my container
		// }
		//maybe not need else as I would have deal with the error in function called in the if condition
	}

}