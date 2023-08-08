/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:44:30 by vjean             #+#    #+#             */
/*   Updated: 2023/08/08 13:19:20 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
	std::list<int> Test;

	Test.push_back(5);
	Test.push_back(10);
	Test.push_back(-42);
	Test.push_back(1);
	Test.push_back(42);
	Test.push_back(32);

	try
	{
		easyfind(Test, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}