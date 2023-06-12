/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:21:09 by vjean             #+#    #+#             */
/*   Updated: 2023/06/12 14:00:35 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
#define	ZOMBIE_CLASS_H

#include <iostream>

class Zombie {

	public:
		Zombie(void); //constructor
		~Zombie(void); //destructor
		void announce(void);
		void setName(std::string name);
		std::string	getName(void) const;

	private:
		std::string _name;

};

Zombie *zombieHorde(int N, std::string name);

#endif