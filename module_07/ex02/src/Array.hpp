/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:08:28 by vjean             #+#    #+#             */
/*   Updated: 2023/08/03 13:37:45 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <string>
template<typename T, unsigned int>
class Array
{
	public:
		Array(void); //Default: but need to create an empty array
		Array(unsigned int n); //Constructor to create an array of n elements
		Array(Array const & src);
		~Array(void);

		Array&			operator=(Array const & rhs);
		unsigned int	size(void) const;

	private:
};

#endif