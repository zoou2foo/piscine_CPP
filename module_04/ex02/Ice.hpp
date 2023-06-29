/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:07:53 by vjean             #+#    #+#             */
/*   Updated: 2023/06/29 17:14:49 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria() //why not working... either I put something or not
{
	public:
		Ice(void); //Default
		Ice(Ice const & src); //copy
		~Ice(void); //destructor

		Ice & operator=(Ice const & rhs);


};

#endif

