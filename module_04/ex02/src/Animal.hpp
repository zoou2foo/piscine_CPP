/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 11:48:58 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 13:07:25 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

#include <iostream>
#include <string>

//need to add prefix A to Animal to differientate it as abstract
class AAnimal
{
	public:
		AAnimal(void); //default constructor
		AAnimal(AAnimal const & src); //copy constructor
		virtual ~AAnimal(void); //destructor

		AAnimal&			operator=(AAnimal const & rhs); //assignation op
		void				setType(std::string type);
		std::string	const 	getType(void) const; //return const & avoid to have a copy created each time
		virtual void		makeSound(void) const = 0; //equals ZERO to make it pure virtual method

	private:

	protected:
		std::string	_type;
		std::string	_sound;
};

#endif