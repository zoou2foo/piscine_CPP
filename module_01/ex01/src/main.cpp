/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:37:45 by vjean             #+#    #+#             */
/*   Updated: 2023/06/12 14:02:07 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	//Zombie instZombie;
	Zombie *nZombie;
	int		n = 20;

	//instZombie.announce();
	nZombie = zombieHorde(n, "Machin");
	nZombie->announce();
	randomChump("Binouche");

	delete nZombie;
	return (0);
}