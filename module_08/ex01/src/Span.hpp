/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:56:41 by vjean             #+#    #+#             */
/*   Updated: 2023/08/09 17:45:55 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector> //not sure anymore if I should use this one or not...

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span&	operator=(Span const & rhs);
		void	addNumber(int newElement); //add a single number to the Span
		int		shortestSpan(void); //return shortest distance between all the numbers stored
		int		longestSpan(void); //return longest distance between all the numbers stored

	private:
		Span(void); //Default constructor
		std::vector<int>	_element; //don't forget to put it back in private
		unsigned long	_cap;
};


#endif