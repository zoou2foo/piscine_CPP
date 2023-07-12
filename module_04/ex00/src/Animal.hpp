/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:48:58 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:15:39 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void); //default constructor
		Animal(Animal const & src); //copy constructor
		virtual ~Animal(void); //destructor

		Animal&				operator=(Animal const & rhs); //assignation op
		void				setType(std::string type);
		std::string	const & getType(void) const; //return const & avoid to have a copy created each time
		virtual void		makeSound(void) const;

	private:

	protected:
		std::string	_type;
		std::string	_sound;
};

#endif