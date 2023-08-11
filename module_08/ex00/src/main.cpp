/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:44:30 by vjean             #+#    #+#             */
/*   Updated: 2023/08/11 07:28:19 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
	/*----------------------------TEST 1--------------------------------------*/

	std::list<int> Test;

	Test.push_back(5);
	Test.push_back(10);
	Test.push_back(-42);
	Test.push_back(1);
	Test.push_back(42);
	Test.push_back(32);

	try
	{
		easyfind(Test, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	/*----------------------------TEST 2--------------------------------------*/
	// std::vector<int> nb;
	// nb.push_back(123);
	// nb.push_back(144);
	// nb.push_back(35);
	// nb.push_back(2);
	// nb.push_back(1121);
	// std::deque<int> nb2;
	// std::list<int> nb5;

	// for (int i = 0; i < 100; i += 25)
	// {
	// 	nb2.push_back(i);
	// 	nb5.push_back(i * 2);
	// 	nb5.push_front(i * 3);
	// }
	// std::cout << "------With vectors------" << std::endl;
	// try
	// {
	// 	easyfind(nb, 2);
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	easyfind(nb, 123444);
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << std::endl << "------With deque------" << std::endl;
	// try
	// {
	// 	easyfind(nb2, 25);
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	easyfind(nb2, 2);
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// std::cout << std::endl << "------With list------" << std::endl;
	// try
	// {
	// 	easyfind(nb5, 50);
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	easyfind(nb5, 2);
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }


	return (0);
}