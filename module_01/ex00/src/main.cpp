/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:37:45 by vjean             #+#    #+#             */
/*   Updated: 2023/06/12 13:51:07 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie instZombie;
	Zombie *nZombie;

	instZombie.announce();
	nZombie = newZombie("Machin");
	nZombie->announce();
	randomChump("Binouche");

	delete nZombie;
	return (0);
}