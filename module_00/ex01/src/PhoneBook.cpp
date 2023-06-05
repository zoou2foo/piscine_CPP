/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:09:54 by vjean             #+#    #+#             */
/*   Updated: 2023/06/05 15:59:11 by vjean            ###   ########.fr       */
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
		if (!darkestSecret.empty()) //need to add a checkup for digits
		{
			this->contactList[i].setDarkestSecret(darkestSecret);
			std::cout << this->contactList[i].getDarkestSecret() << std::endl;
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
}

void	