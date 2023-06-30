/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:11:43 by vjean             #+#    #+#             */
/*   Updated: 2023/06/30 14:36:43 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
//#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{
	/*		TEST 1		*/
	AMateria* ice = new Ice();
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(ice); //variable ice pour éviter leaks

	(void)src;

	delete src;
	delete ice;

	return (0);
}

//Test 1 should display the following:
// $> clang++ -W -Wall -Werror *.cpp
// $> ./a.out | cat -e
// * shoots an ice bolt at bob *$
// * heals bob's wounds *$