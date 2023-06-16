/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:09:16 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 11:51:33 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

//constructor
Harl::Harl(void)
{
	return;
}

//destructor
Harl::~Harl(void)
{
	return;
}

void	Harl::complain(std::string level)
{
	//select the correct call depending of level
	//pointers to member functions
	void (Harl::*PtrMemFn[4])() = { //create a pointer for an array of functions
		&Harl::debug, //where I pass the address to call the function
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string str_level[4] = { //array of strings to compare what I received in "level" and if it's in my arrray
		"debug",
		"info",
		"warning",
		"error"
	};
	int i = 0;
	while (i < 4)
	{
		if (str_level[i] == level) //looking if what I got in level is in my str_level tab; then send the pointer to the correct function in the array
		{
			break;
		}
		i++;
	}
	switch (i)
	{
		case 0:
			(this->*PtrMemFn[i])();
			i += 1;
		case 1:
			(this->*PtrMemFn[i])();
			i += 1;
		case 2:
			(this->*PtrMemFn[i])();
			i += 1;
		case 3:
			(this->*PtrMemFn[i])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}