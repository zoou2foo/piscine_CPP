/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:48:58 by vjean             #+#    #+#             */
/*   Updated: 2023/06/27 14:05:27 by vjean            ###   ########.fr       */
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
		~Animal(void); //destructor

		Animal&				operator=(Animal const & rhs); //assignation op
		void				setType(std::string type);
		std::string	const & getType(void) const; //return cosnt & avoid to have a copy created each time
		std::string const & getSound(void) const;
		void				setSound(std::string sound);
		std::string	const &	makeSound(void);

	private:

	protected:
		std::string	_type;
		std::string	_sound;
};

#endif