/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:00:16 by vjean             #+#    #+#             */
/*   Updated: 2023/06/12 11:00:23 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie newZombie;
	newZombie.setName(name);
	std::cout << newZombie.getName() << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}