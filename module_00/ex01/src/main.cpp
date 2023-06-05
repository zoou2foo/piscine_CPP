/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:34:11 by valeriejean       #+#    #+#             */
/*   Updated: 2023/06/05 13:50:19 by vjean            ###   ########.fr       */
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
		if (tmp.compare("ADD") == 0 || tmp.compare("add") == 0)
			instBook.add();
		if (tmp.compare ("EXIT") == 0 || tmp.compare("exit") == 0)
			break;
	}
	return 0;
}