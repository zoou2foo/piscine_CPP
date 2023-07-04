/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:42:05 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:10:16 by vjean            ###   ########.fr       */
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
	/*		TEST 3		*/
	const AAnimal** Parent = new const AAnimal*[10];
	const AWrongAnimal* Wrong = new WrongCat(); //it will do it's proper sound as WrongAnimal is an abstract class
	const WrongCat* c = new WrongCat();
	//const AWrongAnimal* a = new AWrongAnimal(); //does not work as it's an abstract class
	int	index = 0;

	while (index <= 4)
	{
		AAnimal* catObj = new Cat();
		Parent[index] = catObj;
		index++;
	}
	while (index <= 9)
	{
		AAnimal* dogObj = new Dog();
		Parent[index] = dogObj;
		index++;
	}

	std::cout << "\033[33m" << "-------------------------------------------------------" << std::endl;
	std::cout << "\033[0m";

	std::cout << "First: Animal -> Brain -> Cat or Dog. Then: Brain -> Cat or Dog -> Animal" << std::endl;
	Parent[1]->makeSound();
	Parent[8]->makeSound();
	Wrong->makeSound(); //does not work
	c->makeSound();


	std::cout << "\033[33m" << "-------------------------------------------------------" << std::endl;
	std::cout << "\033[0m";
	index = 0;
	while (index <= 9)
	{
		delete Parent[index];
		index++;
	}
	delete[] Parent;


	/*		TEST 2		*/
	// Dog* Test = new Dog();
	// Dog Copy(*Test);
	// //AAnimal A = new Cat();

	// std::cout << "Test type is: " << Test->getType() << std::endl;
	// std::cout << "Copy type is: " << Copy.getType() << std::endl;
	// std::cout << "Changing copy";
	// Copy.setType("Animal");
	// std::cout << std::endl;
	// std::cout << "Copy type is now: " << Copy.getType() << std::endl;
	// std::cout << "Test type is now: " << Test->getType() << std::endl;

	// delete Test;

	/*		TEST 1		*/
	// const AAnimal** Parent = new const AAnimal*[10];
	// int	index = 0;

	// while (index <= 4)
	// {
	// 	AAnimal* catObj = new Cat();
	// 	Parent[index] = catObj;
	// 	index++;
	// }
	// while (index <= 9)
	// {
	// 	AAnimal* dogObj = new Dog();
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