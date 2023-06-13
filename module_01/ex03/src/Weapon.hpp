/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:55:50 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 09:02:16 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H

#include <iostream>

class Weapon{

	public:
		Weapon(void); //constructor
		~Weapon(void); //destructor
		std::string getType(void) const; //TODO: return a reference... need to check that
		void setType(std::string type);

	private:
		std::string _type;

};

#endif