 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:34:11 by valeriejean       #+#    #+#             */
/*   Updated: 2023/06/07 15:33:33 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	std::string tmp;
	PhoneBook instBook;

	std::cout << "Welcome to this Old School Phonebook!\n";
	while (1)
	{
		std::cout << "Please type your selection between ADD, SEARCH, EXIT: ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			exit (1);
		if (tmp.compare("ADD") == 0 || tmp.compare("add") == 0)
			instBook.add();
		if (tmp.compare("SEARCH") == 0 || tmp.compare("search") == 0)
			instBook.search();
		if (tmp.compare ("EXIT") == 0 || tmp.compare("exit") == 0)
			break;

	}
	return 0;
}
