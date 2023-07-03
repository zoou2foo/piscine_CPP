/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:09:22 by vjean             #+#    #+#             */
/*   Updated: 2023/07/03 15:55:46 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class AMateria;
class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		// virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const & src);
		~Character(void);

		Character&			operator=(Character const & rhs);
		void				setName(std::string name);
		std::string const & getName() const;

		void equip(AMateria* m);
		// void unequip(int idx);
		void use(int idx, ICharacter& target);

	protected:
		std::string	_name;
		AMateria* _arrayMateria[4];
		//AMateria* _garbage[4];
};


#endif