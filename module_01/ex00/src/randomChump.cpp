/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:00:16 by vjean             #+#    #+#             */
/*   Updated: 2023/06/12 09:31:01 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie newZombie;
	newZombie.setName("Binouche");
	std::cout << newZombie.getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}