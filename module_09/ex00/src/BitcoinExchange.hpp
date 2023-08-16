/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:32:56 by vjean             #+#    #+#             */
/*   Updated: 2023/08/16 11:06:43 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <stdexcept>
#include <iomanip>
#include <ctime>
#include <sstream>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		~BitcoinExchange(void);

		void				addStuffContainer(std::string date, int value);
		void				executeProg(std::ifstream& inputFile);
		bool				checkDate(std::string tmp);
		bool				checkMiddle(std::string tmp);
		bool				checkValue(std::string tmp);
		void				compareToDataBase(std::string tmp);
		void				databaseToContainer(void);
		float				getValue(void) const;
		void				setValue(float value);
		std::string			getDate(void) const;
		void				setDate(std::string date);
		int					getInputDate(void) const;
		void				setInputDate(int inputDate);


	private:
	BitcoinExchange&	operator=(BitcoinExchange const & rhs);
	BitcoinExchange(BitcoinExchange const & src);
	std::map<int, float>			_myContainer;
	std::map<int, float>::iterator	_it;
	float							_value;
	std::string						_date;
	std::tm							_dateStruct;
	int								_inputDate;
};



#endif