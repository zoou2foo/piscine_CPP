/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 14:53:01 by vjean             #+#    #+#             */
/*   Updated: 2023/06/20 15:11:14 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
#define	CLAPTRAP_CLASS_H

#include <iostream>
#include <string>

class	ClapTrap
{
	public:
		ClapTrap(void); //default constructor
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src); //copy constructor
		~ClapTrap(void); //destructor

		int		getValue(void) const;
		void	setValue(int value);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_hitPts;
		int			_energyPts;
		int			_attackDamage;
};

#endif