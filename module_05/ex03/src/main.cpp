/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/26 11:45:44 by vjean            ###   ########.fr       */
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
	std::cout << "\033[32m" << "--------------------------------TEST 1: -------------------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat Binouche("Binouche", 1);
		std::cout << Binouche << std::endl;
		try
		{
			ShrubberyCreationForm test("Bob");
			RobotomyRequestForm test2("Mason");
			PresidentialPardonForm test3("Justin");
			std::cout << test << std::endl;
			std::cout << test2 << std::endl;
			std::cout << "\033[36m" << "-----------------------TEST 1.1: Shrubbery ----------------------------" << std::endl;
			std::cout << "\033[0m";
			Binouche.executeForm(test);
			Binouche.signForm(test);
			Binouche.executeForm(test);
			std::cout << "\033[36m" << "-----------------------TEST 1.2: Robotomy -----------------------------" << std::endl;
			std::cout << "\033[0m";
			Binouche.executeForm(test2);
			Binouche.signForm(test2);
			Binouche.executeForm(test2);
			std::cout << "\033[36m" << "------------------TEST 1.3: Presidential Pardon -----------------------" << std::endl;
			std::cout << "\033[0m";
			Binouche.executeForm(test3);
			Binouche.signForm(test3);
			Binouche.executeForm(test3);

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