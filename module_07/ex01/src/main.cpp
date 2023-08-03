/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:03:06 by vjean             #+#    #+#             */
/*   Updated: 2023/08/03 09:16:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

//template function iter qui itère; print ce qu'il y a dans un tableau
//peut importe le type
//avoir un tableau de int, tableau de string...
//autres idées de test?

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



	std::cout << "\033[33m"  << "-------------Test with int array (const)-------------" << std::endl;
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
	// std::cout << "\033[33m" << "-----Test with string array (const)-----" << std::endl;
	//std::cout << "\033[0m";
	// const std::string stringArray[4] = { "hello", "mother", "fuckers", "!"};
	// iter(stringArray, 1, printArray);
	// iter(stringArray, 2, printArray);
	// iter(stringArray, 3, printArray);
	// iter(stringArray, 4, printArray);


}