/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/25 15:40:05 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{

	std::cout << std::endl;
	std::cout << "\033[32m" << "-----------------------TEST 1: ----------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat Binouche("Binouche", 1);
		std::cout << Binouche << std::endl;
		try
		{
			ShrubberyCreationForm test("Binouche");
			RobotomyRequestForm test2("Binouche2");
			PresidentialPardonForm test3("Binouche3");
			std::cout << test << std::endl;
			std::cout << test2 << std::endl;
			std::cout << test3 << std::endl;
			Binouche.executeForm(test);
			// Binouche.executeForm(test2);
			// Binouche.executeForm(test3);
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