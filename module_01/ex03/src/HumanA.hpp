/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:03:18 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 10:21:50 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_H
#define HUMAN_A_CLASS_H

#include <iostream>
#include "Weapon.hpp"

class HumanA{

	public:
		HumanA(Weapon _artillery); //constructor takes a weapon
		~HumanA(void); //destructor
		void attack(void);

	private:
		std::string _name;
		Weapon _artillery;

};

#endif