/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:51:28 by vjean             #+#    #+#             */
/*   Updated: 2023/07/31 16:55:12 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"


//to print addresses:
//std::cout << "Address: " << std::hex << pointer/reference << std::endl;
int main(void)
{
	Data test;
	Data* r_des;
	uintptr_t serial;

	std::cout << "---------Before any serialize and/or deserialize---------" << std::endl;
	std::cout << "dataOne: " << test.getDataOne() << std::endl;
	std::cout << "dataTwo: " << test.getDataTwo() << std::endl;
	std::cout << "dataThree: " << test.getDataThree() << std::endl;
	std::cout << "Address of test: " << &test << std::endl;

	std::cout << "---------Let's serialize stuff---------" << std::endl;
	serial = serialize(&test);
	std::cout << "Address of serial: " << &serial << std::endl;
	std::cout << "What's serial: " << serial << std::endl;

	std::cout << "---------Let's deserialize that stuff---------" << std::endl;
	r_des = deserialize(serial);
	std::cout << "dataOne: " << r_des->getDataOne() << std::endl;
	std::cout << "dataTwo: " << r_des->getDataTwo() << std::endl;
	std::cout << "dataThree: " << r_des->getDataThree() << std::endl;
	std::cout << "Address of r_des: " << r_des << std::endl;

	return (0);
}