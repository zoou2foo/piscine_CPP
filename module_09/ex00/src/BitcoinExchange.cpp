/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:32:40 by vjean             #+#    #+#             */
/*   Updated: 2023/08/15 15:11:04 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/

BitcoinExchange::BitcoinExchange(void)
{
	this->_dateStruct = std::tm();
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

int		BitcoinExchange::getInputDate(void) const
{
	return (this->_inputDate);
}

void	BitcoinExchange::setInputDate(int inputDate)
{
	this->_inputDate = inputDate;
}


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

//to move database in my container
	//have the key: date only and ADD => copy only the first 10 characters + add space + add => + add space
	//have the int: stoi the value, the last element of tmp
	//this->_myContainer.insert(std::pair<int, int>(str, int))
void	BitcoinExchange::databaseToContainer(void)
{
	//to open data.csv
	std::string	line;
	std::ifstream dataBase("data.csv");
	if (dataBase.is_open())
	{
		std::getline(dataBase, line);
		while (std::getline(dataBase, line))
		{
			size_t valueEnd = line.find(",");
			std::string dateIsolate;
			for (size_t i = 0; i < valueEnd; ++i)
			{
				if (line[i] != '-')
					dateIsolate += line[i];
			}
			int inputDate = std::stoi(dateIsolate);
			size_t startRate = line.find(",") + 1;
			std::string exRate = line.substr(startRate, line.length());
			float exchangeRate = std::stof(exRate);
			this->_myContainer.insert(std::pair<int, float>(inputDate, exchangeRate));
			//I'll need to change date to int (same as I did for input)
			//I'll need an int for date and an int for exchange_rate
			//then, send it to the container
			//std::string date = line.substr()
		}
	}
	dataBase.close();
}


bool	BitcoinExchange::checkDate(std::string tmp)
{
	std::string date = tmp.substr(0, 10);
	std::istringstream dateStream(date);
	dateStream >> std::get_time(&this->_dateStruct, "%Y-%m-%d");
	if (dateStream.fail())
	{
		return (false);
	}
	return (true);
	std::cout << "checkDate passed" << std::endl;

}

bool	BitcoinExchange::checkMiddle(std::string tmp)
{
	//check for space and pipe to separate date and value
	if (tmp.find_first_of(" | ") == std::string::npos)
		return(false);
	else
		return (true);
}

bool	BitcoinExchange::checkValue(std::string tmp)
{
	//check that the last part is an positive int or float and not higher than 1000.
	size_t valueStart = tmp.find("|") + 1;
	size_t valueLength = tmp.length() - valueStart;
	std::string stringValue = tmp.substr(valueStart, valueLength);
	float value = std::stof(stringValue);
	if (value < 0 || value > 1000)
		return (false);
	else
	{
		this->setValue(value);
		return (true);
	}

}

void	BitcoinExchange::compareToDataBase(std::string tmp)
{
	//first isolate the date from input and switch it to int
	size_t valueEnd = tmp.find(" ");
	std::string dateIsolate;
	for (size_t i = 0; i < valueEnd; ++i)
	{
		if (tmp[i] != '-')
			dateIsolate += tmp[i];
	}
	this->setInputDate(std::stoi(dateIsolate));
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
	this->databaseToContainer();
	while (std::getline(inputFile, tmp))
	{
		if (!checkDate(tmp))
		{
			std::cerr << "Error: date invalid" << std::endl;
		}
		else if (!checkMiddle(tmp))
		{
			std::cerr << "Error: incorrect format" << std::endl;
		}
		else if (!checkValue(tmp))
		{
			std::cerr << "Error: incorrect value. Make sure it is a positive int or float; between 0 to 1000" << std::endl;
		}
		else
		{
			compareToDataBase(tmp);//rename function time to compare with database
		}
		// if (!this->parseTmp(tmp))
		// {
		// 	//then move the line to my container
		// }
		//maybe not need else as I would have deal with the error in function called in the if condition
	}

}