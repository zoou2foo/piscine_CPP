/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:09:54 by vjean             #+#    #+#             */
/*   Updated: 2023/06/06 08:40:37 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//first ADD
//call one after another each of my "setters"
//important to check the input and NOT quit/exit if input incorrect
void    PhoneBook::add(void)
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
	int				i;
	unsigned long	index;

	i = 0;
	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, firstName);
		if (!firstName.empty())
		{
			this->contactList[i].setFirstName(firstName);
			std::cout << this->contactList[i].getFirstName() << std::endl;
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
	while (1)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, lastName);
		if (!lastName.empty())
		{
			this->contactList[i].setLastName(lastName);
			std::cout << this->contactList[i].getLastName() << std::endl;
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
	while (1)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, nickname);
		if (!nickname.empty())
		{
			this->contactList[i].setNickname(nickname);
			std::cout << this->contactList[i].getNickname() << std::endl;
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
	while (1)
	{
		index = -1;
		std::cout << "Phone number: ";
		std::getline(std::cin, phoneNumber);
		while (isdigit(phoneNumber[++index])); //as long as the characters given are digit
		if (!phoneNumber.empty() && (index == phoneNumber.length())) //if I got an input AND the ENTIRE input was digit
		{
			this->contactList[i].setPhoneNumber(phoneNumber);
			std::cout << this->contactList[i].getPhoneNumber() << std::endl;
			break;
		}
		std::cout << "Must provide an valid input. Try again." << std::endl;
	}
	while (1)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if (!darkestSecret.empty())
		{
			this->contactList[i].setDarkestSecret(darkestSecret);
			std::cout << this->contactList[i].getDarkestSecret() << std::endl;
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
}

void	PhoneBook::search(void)
{
	std::string		input;
	unsigned long	index;
	int				i;

	index = -1;
	i = 0;
	std::cout << std::endl;
	std::cout << "............................................." << std::endl;
	std::cout << "|.....index|first.name|.last.name|..nickname|" << std::endl;
	std::cout << "|...........................................|" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Which index would you like to see? ";
		std::getline(std::cin, input);
		while (isdigit(input[++index]));
		if (!input.empty() && (index == input.length()))
		{
			std::cout << "First name: " << this->contactList[i].getFirstName() << std::endl;
			std::cout << "Last name: " << this->contactList[i].getLastName() << std::endl;
			std::cout << "Nickname: " << this->contactList[i].getNickname() << std::endl;
			std::cout << "Phone number: " << this->contactList[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << this->contactList[i].getDarkestSecret() << std::endl;
			break;
		}
		std::cout << "Must provide a valid index. Try again." << std::endl;
	}
}

void	PhoneBook::setIndex(void)
{
	this->_i += 1;
}