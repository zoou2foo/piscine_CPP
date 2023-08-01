/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:51:28 by vjean             #+#    #+#             */
/*   Updated: 2023/08/01 14:17:50 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	Data test;
	Data* r_des;
	uintptr_t serial;

	std::cout << "\033[35m" << "---------Before any serialize and/or deserialize---------" << std::endl;
	std::cout << "\033[0m";
	std::cout << "dataOne(type string): " << test.getDataOne() << std::endl;
	std::cout << "dataTwo(type int): " << test.getDataTwo() << std::endl;
	std::cout << "dataThree(type size_t): " << test.getDataThree() << std::endl;
	std::cout << "Address of test: " << &test << std::endl;

	std::cout << "\033[35m" << "---------Let's serialize stuff---------" << std::endl;
	std::cout << "\033[0m";
	serial = serialize(&test);
	std::cout << "Address of serial: " << &serial << std::endl;
	std::cout << "What's the serial number: " << serial << std::endl;

	std::cout << "\033[35m" << "---------Let's deserialize that stuff---------" << std::endl;
	std::cout << "\033[0m";
	r_des = deserialize(serial);
	std::cout << "dataOne(type string): " << r_des->getDataOne() << std::endl;
	std::cout << "dataTwo(type int): " << r_des->getDataTwo() << std::endl;
	std::cout << "dataThree(type size_t): " << r_des->getDataThree() << std::endl;
	std::cout << "Address of r_des: " << r_des << std::endl;

	return (0);
}