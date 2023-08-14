/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:32:56 by vjean             #+#    #+#             */
/*   Updated: 2023/08/14 10:39:16 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(BitcoinExchange const & src);
		~BitcoinExchange(void);

		BitcoinExchange&	operator=(BitcoinExchange const & rhs);
		void				addStuffContainer(std::string date, int value);
		void				executeProg(std::ifstream& inputFile);

	private:
	std::map<std::string, int>	_myContainer;
};



#endif