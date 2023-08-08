/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:03:06 by vjean             #+#    #+#             */
/*   Updated: 2023/08/08 11:51:18 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

class Test
{
	public:
		Test(int val) : _value(val) {}
		int getValue() const { return (this->_value);}
	private:
		int	_value;
};

void	printValue(const Test & value)
{
	std::cout << value.getValue() << std::endl;
}

int main(void)
{
	/*----------------------------------------------------------------------------------------------------------------------------*/
	//SIMPLE TEST - FIRST
	int arrayInt[] = {1, 2, 3, 4, 5};
	std::string strArray[] = {"hello", "motherfuckers", "!"};
	Test arrayObj[] = {Test(5), Test(12), Test(3)};

	iter(arrayInt, 5, getArray<int>);
	iter(strArray, 3, getArray<std::string>);
	iter(arrayObj, 3, printValue);


    /*----------------------------------------------------------------------------------------------------------------------------*/
	//SECOND simple test BELOW
	//Test without const: string first and then int
	// std::string stringArray[4] = { "hello", "mother", "fuckers", "!"};
	// iter(stringArray, sizeof(stringArray), getArray);
	// std::cout << "\033[33m" << "-----Test with string array (non const  & after changes)----" << std::endl;
	// std::cout << "\033[0m";
	// iter(stringArray, 4, getArray);

	// std::cout << std::endl;
	// int intArray[5] = { 124, 63, -2, 42, 0};
	// iter(intArray, sizeof(intArray), getArray);
	// std::cout << "\033[33m" << "-----Test with int array (non const  & after changes)----" << std::endl;
	// std::cout << "\033[0m";
	// iter(intArray, 5, getArray);

	//NO NEED to test but in case:
	// std::cout << "\033[33m" << "-----Test with string and int (const)----" << std::endl;
	// std::cout << "\033[0m";
	// const std::string strArray[4] = { "hello", "mother", "fuckers", "!"};
	// iter(strArray, 4, printArray);
	// std::cout << "try to change" << std::endl;
	// iter(strArray, 4, printArray);

	// const int intArray2[5] = { 124, 63, -2, 42, 0};
	// iter(intArray2, 5, printArray);
	// std::cout << "\033[33m" << "-----Test with int array (const  & after changes)----" << std::endl;
	// std::cout << "\033[0m";
	// iter(intArray2, 5, printArray);
	/*----------------------------------------------------------------------------------------------------------------------------*/

	/*----------------------------------------------------------------------------------------------------------------------------*/
	// std::cout << "\033[35m" << "------------------------------Test 1------------------------------" << std::endl;
	// std::cout << "\033[0m";
	// std::cout << "-------------Test with string array (non const)-------------" << std::endl;
	// std::cout << "\033[0m";
	// std::string stringArray[4] = { "hello", "mother", "fuckers", "!"};
	// iter(stringArray, 4, getArray);


	// std::cout << "\033[33m"  << "-------------Test with int array (non const)-------------" << std::endl;
	// std::cout << "\033[0m";
	// int intArray[5] = { 124, 63, -2, 42, 0};
	// iter(intArray, 4, getArray);

	// std::cout << "\033[35m" << "------------------------------Test 2------------------------------" << std::endl;
	// std::cout << "\033[0m";
	// std::cout << "\033[33m" << "-----Test with string array (const)-----" << std::endl;
	// std::cout << "\033[0m";
	// const std::string strArray[4] = { "hello", "mother", "fuckers", "!"};
	// iter(strArray, 4, printArray);

	// std::cout << "\033[33m"  << "-------------Test with int array (const)-------------" << std::endl;
	// std::cout << "\033[0m";
	// const int intArray2[5] = { 124, 63, -2, 42, 0};
	// iter(intArray2, 4, printArray);


}