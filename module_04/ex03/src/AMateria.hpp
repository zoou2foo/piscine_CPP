/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:03:48 by vjean             #+#    #+#             */
/*   Updated: 2023/07/04 11:53:35 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Character.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const & type); //constructor std::string
		AMateria(AMateria const & src); //copy constructor
		virtual ~AMateria(void); //destructor

		AMateria & operator=(AMateria const & rhs);

		std::string const & getType(void) const; //getter to return materia type
		void				setType(std::string type);

		virtual AMateria*	clone(void) const = 0; //method; all derived classes will have it
		virtual void		use(ICharacter& target);

	private:
		AMateria(void); //Default
};



#endif