/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:58:11 by vjean             #+#    #+#             */
/*   Updated: 2023/08/14 10:33:08 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
	if (ac == 2)
	{
		const char* fileName = av[1];
		std::ifstream inputFile(fileName);
		if (!inputFile.is_open())
		{
			std::cerr << "Error: could not open the file." << std::endl;
			return (-1);
		}
		else
		{
			//don't forget to close inputFile at the END!!! inputFile.close()
			BitcoinExchange myClass;
			myClass.executeProg(inputFile);
		}
	}
	else
	{
		std::cerr << "Error: need to provide ONE valid file as an argument." << std::endl;
	}
	return (0);
}