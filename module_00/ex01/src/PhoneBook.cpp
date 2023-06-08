/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:09:54 by vjean             #+#    #+#             */
/*   Updated: 2023/06/08 07:17:04 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::add(void)
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
	unsigned long	index;

	while (1)
	{
		std::cout << "First name: ";
		std::getline(std::cin, firstName);
		if (std::cin.eof()) //in case someone has the bad idea of doing a ctrl-d
			exit (1);
		if (!firstName.empty())
		{
			this->_contactList[this->i].setFirstName(firstName);
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
	while (1)
	{
		std::cout << "Last name: ";
		std::getline(std::cin, lastName);
		if (std::cin.eof())
			exit (1);
		if (!lastName.empty())
		{
			this->_contactList[this->i].setLastName(lastName);
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
	while (1)
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, nickname);
		if (std::cin.eof())
			exit (1);
		if (!nickname.empty())
		{
			this->_contactList[this->i].setNickname(nickname);
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
	while (1)
	{
		index = -1;
		std::cout << "Phone number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof())
			exit (1);
		while (isdigit(phoneNumber[++index]));
		if (!phoneNumber.empty() && (index == phoneNumber.length()))
		{
			this->_contactList[this->i].setPhoneNumber(phoneNumber);
			break;
		}
		std::cout << "Must provide an valid input. Try again." << std::endl;
	}
	while (1)
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof())
			exit (1);
		if (!darkestSecret.empty())
		{
			this->_contactList[this->i].setDarkestSecret(darkestSecret);
			this->i += 1;
			if (this->i == 8)
				this->i = 0;
			break;
		}
		std::cout << "Must provide an input. Try again." << std::endl;
	}
}

void	PhoneBook::search(void)
{
	std::string		input;
	int				ii;

	std::cout << std::endl;
	std::cout << "............................................." << std::endl;
	std::cout << "|.....index|first.name|.last.name|..nickname|" << std::endl;
	std::cout << "|...........................................|" << std::endl;
	unsigned long j = 1;
	while (j <= 8)
	{
		std::cout << "|" << std::setw(10) << j << "|";
		std::cout << std::setw(10);
		if (this->_contactList[j - 1].getFirstName().length() > 10)
		{
			std::string tmp = this->_contactList[j - 1].getFirstName();
			tmp[10 - 1] = '.';
			tmp.resize(10);
			std::cout << tmp << "|";
		}
		else
		{
			std::cout << this->_contactList[j - 1].getFirstName() << "|";
		}
		std::cout << std::setw(10);
		if (this->_contactList[j - 1].getLastName().length() > 10)
		{
			std::string tmp = this->_contactList[j - 1].getLastName();
			tmp[10 - 1] = '.';
			tmp.resize(10);
			std::cout << tmp << "|";
		}
		else
		{
			std::cout << this->_contactList[j - 1].getLastName() << "|";
		}
		std::cout << std::setw(10);
		if (this->_contactList[j - 1].getNickname().length() > 10)
		{
			std::string tmp = this->_contactList[j - 1].getNickname();
			tmp[10 - 1] = '.';
			tmp.resize(10);
			std::cout << tmp << "|" << std::endl;
		}
		else
		{
			std::cout << this->_contactList[j - 1].getNickname() << "|" << std::endl;
		}
		j++;
	}
	std::cout << "|...........................................|" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		j = -1;
		std::cout << "Which index would you like to see? ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (1);
		while(isdigit(input[++j]));
		if(!input.empty() && (j == input.length()) && (j < 11))
			ii = std::stoi(input, nullptr, 10);
		if (!input.empty() && (ii >= 1 && ii <= 8))
		{
			std::cout << "First name: " << this->_contactList[ii - 1].getFirstName() << std::endl;
			std::cout << "Last name: " << this->_contactList[ii - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << this->_contactList[ii - 1].getNickname() << std::endl;
			std::cout << "Phone number: " << this->_contactList[ii - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << this->_contactList[ii - 1].getDarkestSecret() << std::endl;
			break;
		}
		std::cout << "Must provide a valid index. Try again." << std::endl;
	}
}

PhoneBook::PhoneBook(void) : i(0)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}