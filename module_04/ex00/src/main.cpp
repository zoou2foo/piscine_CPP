/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:42:05 by vjean             #+#    #+#             */
/*   Updated: 2023/06/27 14:06:43 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
// #include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal* Parent = new Animal();
	const Animal* Child1 = new Cat();
	const Cat* Child2 = new Cat();

	std::cout << "\033[34m" << "------------------------------------------------------------" << std::endl;
	std::cout << "\033[0m";

	std::cout << "This thing is " << Parent->getType() << std::endl;
	std::cout << "This thing is " << Child1->getType() << std::endl;
	std::cout << "This thing is " << Child2->getType() << std::endl;
	std::cout << "This thing makes this sound: " << Parent->makeSound() << std::endl;
	std::cout << "This thing makes this sound: " << Child1->makeSound() << std::endl;
	std::cout << "This thing makes this sound: " << Child2->makeSound() << std::endl;

	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound
	// j->makeSound();
	// meta->makeSound();

	//ajouter des tests??
	//delete?
	std::cout << "\033[34m" << "------------------------------------------------------------" << std::endl;
	std::cout << "\033[0m";
	delete Parent;
	delete Child1;
	delete Child2;

	return 0;
}