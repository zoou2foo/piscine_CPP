/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/24 11:42:30 by vjean            ###   ########.fr       */
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
		Bureaucrat Binouche("Binouche", 1);
		//Bureaucrat b("Bob", 15);
		std::cout << Binouche << std::endl;
		//std::cout << b << std::endl;
		// try
		// {
		// 	Binouche.incrementGrade();
		// 	b.incrementGrade();
		// 	std::cout << Binouche << std::endl;
		// 	std::cout << b << std::endl;
		// }
		// catch(const std::exception& e)
		// {
		// 	std::cerr << e.what() << '\n';
		// }
		try
		{
			//Binouche.decrementeGrade();
			//b.decrementeGrade();
			Form c("A47", 15, 1);
			std::cout << c << std::endl;
			Binouche.signForm(c);
			//std::cout << Binouche << std::endl;
			//std::cout << b << std::endl;
			std::cout << c << std::endl;
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