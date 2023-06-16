/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:09:28 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 11:09:47 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl Keven;

	//first test
	// std::cout << "Test 1 with debug" << std::endl;
	// Keven.complain("debug");
	// std::cout << "Test 2 with info" << std::endl;
	// Keven.complain("info");
	// std::cout << "Test 3 with warning" << std::endl;
	// Keven.complain("warning");
	// std::cout << "Test 4 with error" << std::endl;
	// Keven.complain("error");

	//if user choose
	std::string levelChosen;
	std::cout << "Please make a select between: debug, info, warning or error. Type your choice: " << std::endl;
	std::cin >> levelChosen;
	Keven.complain(levelChosen);

	return 0;
}