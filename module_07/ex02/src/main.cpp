/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:08:05 by vjean             #+#    #+#             */
/*   Updated: 2023/08/07 16:33:40 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{

	/*-------------------------------------------TEST 1 from ME---------------------------------------------------------------*/
	Array<char> tab(5);
	char* mirror = new char[5];

	tab[0] = 'h';
	tab[1] = 'e';
	tab[2] = 'l';
	tab[3] = 'l';
	tab[4] = '0';
	mirror[0] = 'f';
	mirror[1] = 'u';
	mirror[2] = 'c';
	mirror[3] = 'k';
	mirror[4] = 'u';

	try
	{
		tab[-2] = 'f';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	/*		Uncomment this part later during evaluation		*/
	// for (int i = 0; i < 5; i++)
	// {
	// 	if (mirror[i] != tab[i])
	// 	{
	// 		std::cerr << "not the same char!" << std::endl;
	// 		return (1);
	// 	}
	// }
	try
	{
		tab[5] = '!';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < 5; i++)
	{
		char charIndex = tab[i];
		std::cout << "tab: " << charIndex << std::endl;
		char mirrorIndex = mirror[i];
		std::cout << "mirror: " << mirrorIndex << std::endl;
	}

	delete [] mirror;

/*-------------------------------------------TEST 2 from INTRA---------------------------------------------------------------*/

	// Array<int> numbers(MAX_VAL);
	// int* mirror = new int[MAX_VAL];
	// srand(time(NULL));
	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	const int value = rand();
	// 	numbers[i] = value;
	// 	mirror[i] = value;
	// }
	// //SCOPE
	// {
	// 	Array<int> tmp = numbers;
	// 	Array<int> test(tmp);
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	if (mirror[i] != numbers[i])
	// 	{
	// 		std::cerr << "didn't save the same value!!" << std::endl;
	// 		return 1;
	// 	}
	// }
	// try
	// {
	// 	numbers[-2] = 0;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	numbers[MAX_VAL] = 0;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	numbers[i] = rand();
	// }
	// delete [] mirror;
/*----------------------------------------------------------------------------------------------------------------------------*/
	return 0;
}