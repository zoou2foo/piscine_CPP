/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:08:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 16:15:44 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
#define HUMAN_B_CLASS_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{

	public:
		HumanB(std::string name); //constructor
		~HumanB(void); //destructor
		void setName(std::string name);
		void setWeapon(Weapon *artillery);
		void attack(void);

	private:
		std::string _name;
		Weapon *_artillery;

};

#endif