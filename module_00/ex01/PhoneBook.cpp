/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriejean <valeriejean@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:09:54 by vjean             #+#    #+#             */
/*   Updated: 2023/06/04 12:33:57 by valeriejean      ###   ########.fr       */
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
    
    std::cout << "First name: ";
    std::cin >> firstName;
    this->contactList[i].setFirstName(firstName);
    std::cout << "Last name: ";
    std::cin >> lastName;
    this->contactList[i].setLastName(lastName); //need to send the input
    std::cout << "Nickname: ";
    std::cin >> nickname;
    this->contactList[i].setNickname(nickname); //need to send input 
    std::cout << "Phone number (must be digits): ";
    std::cin >> phoneNumber; //need a while loop to check each character in the string
    if (phoneNumber >= 48 && phoneNumber <= 57)
        this->contactList[i].setPhoneNumber(phoneNumber); //add input
    std::cout << "Darkest secret: ";
    std::cin >> darkestSecret;
    this->contactList->setDarkestSecret(darkestSecret);
    
}