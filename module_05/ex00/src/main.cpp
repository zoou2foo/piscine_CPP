/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/23 13:51:16 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{

	std::cout << std::endl;
	std::cout << "\033[32m" << "-----------------------TEST 1: All good and beautiful bureaucrats----------------------------" << std::endl;
	try
	{
		/*	TEST # 1 - All good and beautiful bureaucrats	*/
		Bureaucrat a("Binouche", 10);
		Bureaucrat b("Bob", 5);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "\033[33m" << "--------------------------TEST 2: All bad and ugly bureaucrats-------------------------------" << std::endl;
	try
	{
		/*	TEST # 2 - All bad and ugly bureaucrats	*/
		Bureaucrat c("Gerard", -42);
		Bureaucrat d("Leon", 25);
		std::cout << c << std::endl;
		std::cout << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "\033[34m" << "----------TEST 3: Some good and beautiful bureaucrats. Some bad and ugly bureaucrats---------" << std::endl;
	try
	{
		//could comment Karen to see what will happen. Or uncomment the msg in constructor
		Bureaucrat al("Keven", 25);
		Bureaucrat f("Karen", 500);
		Bureaucrat g("Harl", 1);
		std::cout << al << std::endl;
		std::cout << f << std::endl;
		std::cout << g << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "\033[35m" << "--------------------------TEST 4: Let's promote some bureaucrats-----------------------------" << std::endl;
	try
	{
		Bureaucrat h("Mona", 2);
		Bureaucrat i("Lisa", 3);
		Bureaucrat j("Leonard", 1);
		h.decrementeGrade();
		i.decrementeGrade();
		j.decrementeGrade();
		std::cout << h << std::endl;
		std::cout << i << std::endl;
		std::cout << j << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "\033[37m" <<"--------------------------TEST 5: Let's demote some bureaucrats-------------------------------" << std::endl;
	try
	{
		Bureaucrat k("Barb", 10);
		Bureaucrat l("Karl", 45);
		Bureaucrat m("Homer", 150);
		k.incrementGrade();
		l.incrementGrade();
		m.incrementGrade();
		std::cout << k << std::endl;
		std::cout << l << std::endl;
		std::cout << m << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return (0);
}