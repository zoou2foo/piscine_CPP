/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriejean <valeriejean@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:09:54 by vjean             #+#    #+#             */
/*   Updated: 2023/06/04 07:42:27 by valeriejean      ###   ########.fr       */
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
    PhoneBook.Contact::setFirstName(std::string firstName);
    std::cout << "Last name: ";
    std::cin >> lastName;
    Contact::setLastName(lastName); //need to send the input
    std::cout << "Nickname: ";
    std::cin >> nickname;
    Contact::setNickname(nickname); //need to send input 
    std::cout << "Phone number (must be digits): ";
    std::cin >> phoneNumber;
    if (input >= 48 && input <= 57)
        Contact::setPhoneNumber(phoneNumber); //add input
    std::cout << "Darkest secret: ";
    std::cin >> darkestSecret;
    Contact::setDarkestSecret(darkestSecret);
    
}