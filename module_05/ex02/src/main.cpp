/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/26 11:42:33 by vjean            ###   ########.fr       */
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
	std::cout << std::endl;
	std::cout << "\033[35m" << "--------------------------------TEST 2: -------------------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat Josephine("Josephine", 150);
		std::cout << Josephine << std::endl;
		try
		{
			ShrubberyCreationForm test("George");
			RobotomyRequestForm test2("Joseph-Arthur");
			PresidentialPardonForm test3("Ti-Coune");
			std::cout << test << std::endl;
			std::cout << test2 << std::endl;
			std::cout << test3 << std::endl;
			std::cout << "\033[36m" << "-----------------------TEST 2.1: Shrubbery ----------------------------" << std::endl;
			std::cout << "\033[0m";
			Josephine.executeForm(test);
			Josephine.signForm(test);
			Josephine.executeForm(test);
			std::cout << "\033[36m" << "-----------------------TEST 2.2: Robotomy -----------------------------" << std::endl;
			std::cout << "\033[0m";
			Josephine.executeForm(test2);
			Josephine.signForm(test2);
			Josephine.executeForm(test2);
			std::cout << "\033[36m" << "------------------TEST 2.3: Presidential Pardon -----------------------" << std::endl;
			std::cout << "\033[0m";
			Josephine.executeForm(test3);
			Josephine.signForm(test3);
			Josephine.executeForm(test3);

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
	std::cout << std::endl;
	std::cout << "\033[33m" << "--------------------------------TEST 3: -------------------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat MacPherson("MacPherson", 146);
		std::cout << MacPherson << std::endl;
		try
		{
			ShrubberyCreationForm test("Cyprien");
			RobotomyRequestForm test2("Memere");
			PresidentialPardonForm test3("Raoul");
			std::cout << test << std::endl;
			std::cout << test2 << std::endl;
			std::cout << test3 << std::endl;
			std::cout << "\033[36m" << "-----------------------TEST 3.1: Shrubbery ----------------------------" << std::endl;
			std::cout << "\033[0m";
			MacPherson.executeForm(test);
			MacPherson.signForm(test);
			MacPherson.executeForm(test);
			std::cout << "\033[36m" << "-----------------------TEST 3.2: Robotomy -----------------------------" << std::endl;
			std::cout << "\033[0m";
			MacPherson.executeForm(test2);
			MacPherson.signForm(test2);
			MacPherson.executeForm(test2);
			std::cout << "\033[36m" << "------------------TEST 3.3: Presidential Pardon -----------------------" << std::endl;
			std::cout << "\033[0m";
			MacPherson.executeForm(test3);
			MacPherson.signForm(test3);
			MacPherson.executeForm(test3);
			std::cout << "\033[36m" << "------------------TEST 3.4: If MacPherson promoted... -----------------------" << std::endl;
			std::cout << "\033[0m";
			MacPherson.decrementeGrade();
			MacPherson.signForm(test);
			MacPherson.executeForm(test);
			MacPherson.signForm(test2);
			MacPherson.executeForm(test2);
			MacPherson.signForm(test3);
			MacPherson.executeForm(test3);

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