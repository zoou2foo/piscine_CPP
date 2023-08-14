/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:32:56 by vjean             #+#    #+#             */
/*   Updated: 2023/08/14 14:25:05 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <stdexcept>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange(void);

		BitcoinExchange&	operator=(BitcoinExchange const & rhs);
		void				addStuffContainer(std::string date, int value);
		void				executeProg(std::ifstream& inputFile);
		void				checkDate(std::string tmp);
		void				checkMiddle(std::string tmp);
		void				checkValue(std::string tmp);
		void				moveToContainer(std::string tmp);
		float				getValue(void) const;
		void				setValue(float value);
		std::string			getDate(void) const;
		void				setDate(std::string date);

		class ErrorDate : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: incorrect date");
				}
		};

	private:
	std::map<std::string, int>	_myContainer;
	float						_value;
	std::string					_date;
};



#endif