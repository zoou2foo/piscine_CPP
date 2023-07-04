/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:11:43 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 11:05:39 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main()
{
	/*		TEST 1		*/
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();

	IMateriaSource* src = new MateriaSource();
	std::cout << "------ LEARN MATERIA TIME --------" << std::endl;
	src->learnMateria(ice); //variable ice to avoid leaks
	src->learnMateria(cure); //same as previous
	src->learnMateria(ice); //variable ice to avoid leaks
	src->learnMateria(cure); //same as previous
	src->learnMateria(cure);
	std::cout << std::endl;

	std::cout << "------ New Character TIME --------" << std::endl;

	ICharacter* me = new Character("me");
	std::cout << std::endl;

	std::cout << "------ CREATE Materia TIME --------" << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << "------ New Character TIME --------" << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	std::cout << "------ ACTION TIME --------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(2);
	me->use(3, *bob);
	me->use(5, *bob);
	me->use(2, *bob);
	std::cout << std::endl;


	std::cout << "------ DELETE TIME --------" << std::endl;
	delete bob;
	delete me;
	delete src;
	delete ice;
	delete cure;

	return (0);
}

//Test 1 should display the following:
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$