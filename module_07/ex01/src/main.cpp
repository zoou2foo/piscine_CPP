/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:03:06 by vjean             #+#    #+#             */
/*   Updated: 2023/08/07 16:37:35 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main(void)
{
	std::cout << "\033[35m" << "------------------------------Test 1------------------------------" << std::endl;
	std::cout << "\033[0m";
	std::cout << "-------------Test with string array (non const)-------------" << std::endl;
	std::cout << "\033[0m";
	std::string stringArray[4] = { "hello", "mother", "fuckers", "!"};
	std::cout << "First call=> ";
	iter(stringArray, 2, getArray);
	std::cout << "Second call=> ";
	iter(stringArray, 3, getArray);
	std::cout << "Third call=> ";
	iter(stringArray, 4, getArray);

	std::cout << "\033[33m" << "-----Test with string array (non const  & after changes)----" << std::endl;
	std::cout << "\033[0m";
	iter(stringArray, 4, getArray);

	std::cout << "\033[33m"  << "-------------Test with int array (non const)-------------" << std::endl;
	std::cout << "\033[0m";
	int intArray[5] = { 124, 63, -2, 42, 0};
	std::cout << "First call=> ";
	iter(intArray, 1, getArray);
	std::cout << "Second call=> ";
	iter(intArray, 2, getArray);
	std::cout << "Third call=> ";
	iter(intArray, 3, getArray);
	std::cout << "Fourth call=> ";
	iter(intArray, 4, getArray);

	std::cout << "\033[33m" << "-----Test with int array (non const  & after changes)----" << std::endl;
	std::cout << "\033[0m";
	iter(intArray, 5, getArray);

	std::cout << "\033[35m" << "------------------------------Test 2------------------------------" << std::endl;
	std::cout << "\033[0m";
	std::cout << "\033[33m" << "-----Test with string array (const)-----" << std::endl;
	std::cout << "\033[0m";
	const std::string strArray[4] = { "hello", "mother", "fuckers", "!"};
	iter(strArray, 1, printArray);
	iter(strArray, 2, printArray);
	iter(strArray, 3, printArray);
	iter(strArray, 4, printArray);

	std::cout << "\033[33m"  << "-------------Test with int array (const)-------------" << std::endl;
	std::cout << "\033[0m";
	const int intArray2[5] = { 124, 63, -2, 42, 0};
	std::cout << "First call=> ";
	iter(intArray2, 1, printArray);
	std::cout << "Second call=> ";
	iter(intArray2, 2, printArray);
	std::cout << "Third call=> ";
	iter(intArray2, 3, printArray);
	std::cout << "Fourth call=> ";
	iter(intArray2, 4, printArray);

    /*----------------------------------------------------------------------------------------------------------------------------*/
	//simple test BELOW
	//Test without const: string first and then int
	// std::string stringArray[4] = { "hello", "mother", "fuckers", "!"};
	// iter(stringArray, 4, getArray);
	// std::cout << "\033[33m" << "-----Test with string array (non const  & after changes)----" << std::endl;
	// std::cout << "\033[0m";
	// iter(stringArray, 4, getArray);

	// std::cout << std::endl;
	// int intArray[5] = { 124, 63, -2, 42, 0};
	// iter(intArray, 4, getArray);
	// std::cout << "\033[33m" << "-----Test with int array (non const  & after changes)----" << std::endl;
	// std::cout << "\033[0m";
	// iter(intArray, 4, getArray);

	// std::cout << "\033[33m" << "-----Test with string and int (const)----" << std::endl;
	// std::cout << "\033[0m";
	// const std::string strArray[4] = { "hello", "mother", "fuckers", "!"};
	// iter(strArray, 4, printArray);
	// std::cout << "try to change" << std::endl;
	// iter(strArray, 4, printArray);

	// const int intArray2[5] = { 124, 63, -2, 42, 0};
	// iter(intArray2, 4, printArray);
	// std::cout << "\033[33m" << "-----Test with int array (const  & after changes)----" << std::endl;
	// std::cout << "\033[0m";
	// iter(intArray2, 4, printArray);
	/*----------------------------------------------------------------------------------------------------------------------------*/


}