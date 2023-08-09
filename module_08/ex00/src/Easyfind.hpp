/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:45:20 by vjean             #+#    #+#             */
/*   Updated: 2023/08/09 08:54:35 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <deque>

class ErrorMsg : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Did not find an occurence");
		}
};

template<typename T>
void	easyfind(T& element, int value)
{
	typename T::iterator	it;

	it = find(element.begin(), element.end(), value);
	if (it == element.end())
		throw ErrorMsg();
	std::cout << "FOUND!" << std::endl;
}

#endif