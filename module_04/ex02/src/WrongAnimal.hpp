/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 08:07:57 by vjean             #+#    #+#             */
/*   Updated: 2023/06/29 10:57:19 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class AWrongAnimal
{
	public:
		AWrongAnimal(void);
		AWrongAnimal(AWrongAnimal const & src);
		virtual ~AWrongAnimal(void);

		AWrongAnimal&		operator=(AWrongAnimal const & rhs);
		void				setType(std::string type);
		std::string const & getType(void) const;
		virtual void		makeSound(void) const = 0;

	private:

	protected:
		std::string _type;
		std::string _sound;
};

#endif