/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:08:27 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 09:09:08 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_CLASS_H
#define HUMAN_B_CLASS_H

#include <iostream>
#include "Weapon.hpp"

class HumanB{

	public:
		HumanB(void); //constructor
		~HumanB(void); //destructor
		void attack(void);

	private:
		std::string _name;

};

#endif