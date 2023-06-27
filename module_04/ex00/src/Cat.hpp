/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:32:37 by vjean             #+#    #+#             */
/*   Updated: 2023/06/27 13:51:52 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);

		Cat&	operator=(Cat const & rhs);

	private:

	protected:
};


#endif