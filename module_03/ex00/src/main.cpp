/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriejean <valeriejean@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:52:49 by vjean             #+#    #+#             */
/*   Updated: 2023/06/21 10:43:05 by valeriejean      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap firstPerson("Bob");
	ClapTrap secondPerson("George");

	firstPerson.attack("George");
  secondPerson.takeDamage(1);
  secondPerson.attack("Bob");
  firstPerson.takeDamage(1);
  firstPerson.attack("George");
  secondPerson.takeDamage(1);
  secondPerson.attack("Bob");
  firstPerson.takeDamage(1);
  firstPerson.attack("George");
  secondPerson.takeDamage(1);
  secondPerson.attack("Bob");
  firstPerson.takeDamage(1);
  firstPerson.attack("George");
  secondPerson.takeDamage(1);
  secondPerson.attack("Bob");
  firstPerson.takeDamage(1);
  firstPerson.attack("George");
  secondPerson.takeDamage(1);
  secondPerson.attack("Bob");
  firstPerson.takeDamage(1);
  secondPerson.attack("Bob");
  firstPerson.takeDamage(1);

	return 0;
}

/*
main to test
  Claptrap cp1("Bob");
    Claptrap cp2(cp1);

    cp1.attack("George");
    cp1.beRepaired(1);
    cp2.attack("George");
    cp2.beRepaired(10);


*/