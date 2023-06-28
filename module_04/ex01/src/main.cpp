/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:42:05 by vjean             #+#    #+#             */
/*   Updated: 2023/06/28 09:30:52 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	/*		TEST 1		*/
	const Animal* Parent = new Animal();
	const Animal* Child1 = new Cat();
	const Animal* Child3 = new Dog();
	const Cat* Child2 = new Cat();
	const Dog* Child4 = new Dog();
	const WrongAnimal* Child5 = new WrongAnimal();
	const WrongAnimal* Child6 = new WrongCat();
	const WrongCat* Child7 = new WrongCat();

	std::cout << "\033[34m" << "------------------------------------------------------------" << std::endl;
	std::cout << "\033[0m";

	std::cout << "This thing, Parent, is " << Parent->getType() << std::endl;
	std::cout << "This thing, child1, is " << Child1->getType() << std::endl;
	std::cout << "This thing, child2, is " << Child2->getType() << std::endl;
	std::cout << "This thing, child3, is " << Child3->getType() << std::endl;
	std::cout << "This thing, child4, is " << Child4->getType() << std::endl;
	std::cout << "This thing, child5, is " << Child5->getType() << std::endl;
	std::cout << "This thing, child6, is " << Child6->getType() << std::endl;
	std::cout << "This thing, child7, is " << Child7->getType() << std::endl;
	std::cout << "This thing, Parent, makes this sound: ";
	Parent->makeSound();
	std::cout << std::endl;
	std::cout << "This thing, child1, makes this sound: ";
	Child1->makeSound();
	std::cout << std::endl;
	std::cout << "This thing, child2, makes this sound: ";
	Child2->makeSound();
	std::cout << std::endl;
	std::cout << "This thing, child3, makes this sound: ";
	Child3->makeSound();
	std::cout << std::endl;
	std::cout << "This thing, child4, makes this sound: ";
	Child4->makeSound();
	std::cout << std::endl;
	std::cout << "This thing, child5, makes this sound: ";
	Child5->makeSound();
	std::cout << std::endl;
	std::cout << "This thing, child6, makes this sound: ";
	Child6->makeSound();
	std::cout << std::endl;
	std::cout << "This thing, child7, makes this sound: ";
	Child7->makeSound();
	std::cout << std::endl;
	std::cout << "\033[34m" << "------------------------------------------------------------" << std::endl;
	std::cout << "\033[0m";
 	delete Parent;
	delete Child1;
	delete Child2;
	delete Child3;
	delete Child4;
	delete Child5;
	delete Child6;
	delete Child7;

	/*		TEST 2 - from subject pdf		*/
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound
	// j->makeSound();
	// meta->makeSound();

	// delete meta;
	// delete i;
	// delete j;


	/*		TEST 3		*/
	// const WrongAnimal* meta = new WrongAnimal();
	// const Animal* j = new Dog();
	// const WrongAnimal* i = new WrongCat();

	// std::cout << "\033[34m" << "------------------------------------------------------------" << std::endl;
	// std::cout << "\033[0m";

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the WrongAnimal sound
	// j->makeSound();
	// meta->makeSound();
	// std::cout << "\033[34m" << "------------------------------------------------------------" << std::endl;
	// std::cout << "\033[0m";

	// delete meta;
	// delete i;
	// delete j;

	return 0;
}