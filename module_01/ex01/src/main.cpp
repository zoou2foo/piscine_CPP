/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:37:45 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 13:09:36 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *nZombie;
	int		n = 10;

	nZombie = zombieHorde(n, "Binouche");
	for (int i = 0; i < n; i++)
	{
		std::cout << i << " ";
		nZombie->announce();
	}
	delete[] nZombie;
	return (0);
}