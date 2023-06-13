/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:35:50 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 16:38:48 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon *club = new Weapon("crude spiked club"); //instance de Weapon qui pointe sur Weapon dans la heap

		HumanA bob("Bob", *club); //instance de HumanA qui s'appelle. Il prend en para son nom et un Weapon en référence. Pourquoi * et pas &: * car il prend en référence ce que club pointe(prend l'adresse que club pointe).
		bob.attack();
		club->setType("fucking sword!!!! hahahaha"); //besoin de -> car on est sur la heap et non pas stack (local)
		bob.attack();
		delete club;
	}
	{
		Weapon *club = new Weapon("crude spiked club");

		HumanB binouche("Binouche");
		binouche.attack();
		binouche.setWeapon(club);
		binouche.attack();
		club->setType("fucking sword!!!! hahahaha");
		binouche.attack();
		delete club;
	}
	return 0;
}