/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JustFew.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:01:10 by vjean             #+#    #+#             */
/*   Updated: 2023/08/02 13:38:48 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JUSTFEW_HPP
# define JUSTFEW_HPP

#include <iostream>
#include <iomanip>
#include <string>

template<typename T>
T const &	myMax(T const & x, T const & y)
{
	return (x >= y ? x : y);
}

template<typename T>
T const &	myMin(T const & x, T const & y)
{
	return (x <= y ? x : y);
}

template<typename T>
void		swap(T& x, T& y)
{
	T	c = x;
	x = y;
	y = c;
}

#endif