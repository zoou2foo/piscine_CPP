/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/23 16:23:54 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{

	std::cout << std::endl;
	std::cout << "\033[32m" << "-----------------------TEST 1: Perfect bureaucrats & Forms----------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat a("Binouche", 1);
		Bureaucrat b("Bob", 15);
		Form c("A47"); //QUESTION: need to check if I would include grade needed to be signed
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		try
		{
			a.incrementGrade();
			b.incrementGrade();
			std::cout << a << std::endl;
			std::cout << b << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			a.decrementeGrade();
			b.decrementeGrade();
			std::cout << a << std::endl;
			std::cout << b << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}