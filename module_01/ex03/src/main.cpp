/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:35:50 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 13:53:24 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		//An instance of Weapon that points to Weapon on the heap
		Weapon *club = new Weapon("crude spiked club");

		//An instance of HumanA. It takes in parameters a name and a weapon in REF.
		//Why * and not &? It takes a reference of what this "club" points.
		HumanA bob("Bob", *club);
		bob.attack();
		club->setType("fucking sword!!!! hahahaha"); //Need -> as we are on the heap and not stack
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