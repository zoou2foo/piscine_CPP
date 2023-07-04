/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:42:05 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:13:49 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main()
{
	/*		TEST 2		*/
	Dog* Test = new Dog();
	Dog Copy(*Test);

	std::cout << "Test type is: " << Test->getType() << std::endl;
	std::cout << "Copy type is: " << Copy.getType() << std::endl;
	std::cout << "Changing copy";
	Copy.setType("Animal");
	std::cout << std::endl;
	std::cout << "Copy type is now: " << Copy.getType() << std::endl;
	std::cout << "Test type is now: " << Test->getType() << std::endl;

	delete Test;


	/*		TEST 1		*/
	// const Animal** Parent = new const Animal*[10];
	// int	index = 0;

	// while (index <= 4)
	// {
	// 	Animal* catObj = new Cat();
	// 	Parent[index] = catObj;
	// 	index++;
	// }
	// while (index <= 9)
	// {
	// 	Animal* dogObj = new Dog();
	// 	Parent[index] = dogObj;
	// 	index++;
	// }

	// std::cout << "\033[33m" << "-------------------------------------------------------" << std::endl;
	// std::cout << "\033[0m";

	// std::cout << "First: Animal -> Brain -> Cat or Dog. Then: Brain -> Cat or Dog -> Animal" << std::endl;


	// std::cout << "\033[33m" << "-------------------------------------------------------" << std::endl;
	// std::cout << "\033[0m";
	// index = 0;
	// while (index <= 9)
	// {
	// 	delete Parent[index];
	// 	index++;
	// }
	// delete[] Parent;

	return 0;
}