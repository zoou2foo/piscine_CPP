/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/24 13:40:15 by vjean            ###   ########.fr       */
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
		std::cout << Binouche << std::endl;
		try
		{
			Form c("A47", 15, 1);
			std::cout << c << std::endl;
			Binouche.signForm(c);
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
	std::cout << std::endl;
	std::cout << "\033[32m" << "-----------------------TEST 2: Not so perfect bureaucrats & Forms----------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat Bob("Bob", 42);
		std::cout << Bob << std::endl;
		try
		{
			Form Pass("A38", 2, 1);
			std::cout << Pass << std::endl;
			Bob.signForm(Pass);
			std::cout << Pass << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "\033[32m" << "-----------------------TEST 3: Does the bureaucrat have the right grade to sign?----------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat Chose("Chose", 10);
		Bureaucrat Loser("Loser", 75);
		std::cout << Chose << std::endl;
		try
		{
			Form Ticket("A44", 15, 1);
			std::cout << Ticket << std::endl;
			Chose.signForm(Ticket);
			Loser.signForm(Ticket);
			std::cout << Ticket << std::endl;
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "\033[32m" << "-----------------------TEST 4: Perfect Bureaucrat & not so perfect Form----------------------------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		Bureaucrat Machin("Machin", 10);
		std::cout << Machin << std::endl;
		try
		{
			Form Billet("A55", -42, 1);
			std::cout << Billet << std::endl;
			Machin.signForm(Billet);
			std::cout << Billet << std::endl;
		}
		catch (const std::exception& e)
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