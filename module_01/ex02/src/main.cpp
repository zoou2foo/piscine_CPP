/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:23:17 by vjean             #+#    #+#             */
/*   Updated: 2023/06/12 16:45:34 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string controlTower = "HI THIS IS BRAIN";
	std::string *stringPTR = &controlTower;
	std::string &stringREF = controlTower;

	std::cout << "Address of the main string: " << &controlTower << std::endl;
	std::cout << "Address of the string pointer: " << stringPTR << std::endl;
	std::cout << "Address of the string reference: " << &stringREF << std::endl;

	std::cout << "Value of the main string: " << controlTower << std::endl;
	std::cout << "Value of the string pointer: " << *stringPTR << std::endl;
	std::cout << "Value of the string reference: " << stringREF << std::endl;
}
