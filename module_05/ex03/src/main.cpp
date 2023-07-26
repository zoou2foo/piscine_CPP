/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/26 16:19:19 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{

	std::cout << std::endl;
	std::cout << "\033[32m" << "--------------------------------TEST 1: -------------------------------------" << std::endl;
	std::cout << "\033[0m";

	Intern leStagiaire;
	AForm* randomForm;
	AForm* randomForm2;
	AForm* randomForm3;
	AForm* randomForm4;

	randomForm = leStagiaire.makeForm("robotomy request", "Bobby");
	std::cout << std::endl;
	std::cout << "\033[32m" << "--------------------------------TEST 2: -------------------------------------" << std::endl;
	std::cout << "\033[0m";
	randomForm2 = leStagiaire.makeForm("machin", "Bob");
	std::cout << std::endl;
	std::cout << "\033[32m" << "--------------------------------TEST 3: -------------------------------------" << std::endl;
	std::cout << "\033[0m";
	randomForm3 = leStagiaire.makeForm("presidential pardon", "Mark");
	std::cout << std::endl;
	std::cout << "\033[32m" << "--------------------------------TEST 4: -------------------------------------" << std::endl;
	std::cout << "\033[0m";
	randomForm4 = leStagiaire.makeForm("shrubbery creation", "Karen");

	std::cout << std::endl;
	std::cout << "\033[35m" << "What a productive little Intern! :)";
	std::cout << "\033[0m";

	delete (randomForm);
	delete (randomForm2);
	delete (randomForm3);
	delete (randomForm4);
	return (0);
}