/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:03:18 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 15:50:16 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
#define HUMAN_A_CLASS_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{

	public:
		HumanA(std::string name, Weapon &artillery); //constructor takes a weapon
		~HumanA(void); //destructor
		void setName(std::string name);
		void attack(void);

	private:
		std::string _name;
		const Weapon &_artillery;

};

#endif