/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:03:12 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 16:08:59 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructor
Weapon::Weapon(std::string type) : _type(type)
{
	return;
}

//destructor
Weapon::~Weapon(void)
{
	return;
}

//setter
void	Weapon::setType(std::string type)
{
	_type = type;
}

//getter
const std::string &Weapon::getType(void) const
{
	return (_type);
}