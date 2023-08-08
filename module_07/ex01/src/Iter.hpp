/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:03:01 by vjean             #+#    #+#             */
/*   Updated: 2023/08/08 11:46:44 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iomanip>
#include <string>

template<typename T>
void	getArray(T & array)
{
	std::cout << "\033[32m" << array << std::endl;
	std::cout << "\033[0m";
}

template<typename T, typename Function>
void	iter(T * array, int length, Function f)
{
	for(int index = 0; index < length; index++)
	{
		f(array[index]);
	}
}

/*	NO need to test for const; but just in case	*/
// template<typename T>
// void	printArray(const T & array)
// {
// 	std::cout << "\033[32m" << array << std::endl;
// 	std::cout << "\033[0m";
// 	// array = 'a';
// 	// std::cout << array << std::endl;
// }

// template<typename T, int>
// void	iter(const T* array, int length, void(*printArray)(const T & array))
// {
// 	for(int index = 0; index < length; index++)
// 		printArray(array[index]);
// }


#endif