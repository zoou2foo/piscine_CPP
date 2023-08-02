/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:52:17 by vjean             #+#    #+#             */
/*   Updated: 2023/08/02 13:59:19 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "JustFew.hpp"

int	main(void)
{
	int a = 2;
	int b = 3;

	std::cout << "\033[33m" << "-----------Test 1 - with int------------" << std::endl;
	std::cout << "\033[0m";
	std::cout << "-----Before the swap-----" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "------After the swap-----" << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << myMin(a, b) << std::endl;
	std::cout << "max(a, b) = " << myMax(a, b) << std::endl;


	std::cout << "\033[33m" << "----------Test 2 - with string----------" << std::endl;
	std::cout << "\033[0m";
	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << "-----Before the swap-----" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "------After the swap-----" << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << myMin(c, d) << std::endl;
	std::cout << "max(c, d) = " << myMax(c, d) << std::endl;

	std::cout << "\033[33m" << "----------Test 3 - with double----------" << std::endl;
	std::cout << "\033[0m";
	double e = 3.45;
	double f = 56.5;

	std::cout << "-----Before the swap-----" << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "------After the swap-----" << std::endl;
	swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(e, f) = " << myMin(e, f) << std::endl;
	std::cout << "max(e, f) = " << myMax(e, f) << std::endl;

	return (0);
}