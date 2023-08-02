/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:03:01 by vjean             #+#    #+#             */
/*   Updated: 2023/08/02 15:58:42 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <iomanip>

//first function: iter
//iter takes 1. address of array; 2. length of array; 3. FUNCTION to look every element of the array
//3rd param: can be a template function too.

template<typename T>
void	getArray(T index)
{
	
}

template<typename T, typename Func>
void	iter(T const & array, T const length, Func getArray(T index))
{
	for()
}


#endif