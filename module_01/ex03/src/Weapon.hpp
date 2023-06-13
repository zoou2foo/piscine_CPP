/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:55:50 by vjean             #+#    #+#             */
/*   Updated: 2023/06/13 16:09:20 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_H
#define WEAPON_CLASS_H

#include <iostream>
#include <string>
class Weapon{

	public:
		Weapon(std::string type); //constructor
		~Weapon(void); //destructor
		const std::string &getType(void) const; //need to say type string const REFgetType with & and then, at the end add const. NOT: const std::string &getType(void);
		void setType(std::string type);

	private:
		std::string _type;

};

#endif