/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:45:20 by vjean             #+#    #+#             */
/*   Updated: 2023/08/08 15:13:24 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>

class ErrorMsg : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Did not find an occurence");
		}
};

template<typename T>
void	easyfind(T element, int value)
{
	T*	it; //maybe typename T::iterator it... ???

	it = find(element.begin(), element.end(), value);
	if (!it)
		throw ErrorMsg();
}

#endif