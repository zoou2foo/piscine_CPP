/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:59:09 by vjean             #+#    #+#             */
/*   Updated: 2023/06/27 16:17:52 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);

		Dog&	operator=(Dog const & rhs);
		virtual std::string	const & makeSound(void) const;

	private:

	protected:

};


#endif