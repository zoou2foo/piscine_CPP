/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:03:01 by vjean             #+#    #+#             */
/*   Updated: 2023/08/03 09:05:51 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <iomanip>
#include <string>

//first function: iter
//iter takes 1. address of array; 2. length of array; 3. FUNCTION to look every element of the array
//3rd param: can be a template function too.

template<typename T>
void	getArray(T & array)
{
	std::cout << "\033[32m" << array << std::endl;
	std::cout << "\033[0m";
	std::cout << "After modify what's in this spot: ";
	array = 'a';
	std::cout << "\033[31m" << array << std::endl;
	std::cout << "\033[0m";
}

// template<typename T>
// void	printArray(const T & array)
// {
// 	std::cout << array << std::endl;
// 	array = 'a';
// 	std::cout << array << std::endl;
// }

// template<typename T, int>
// void	iter(const T* array, int length, void(*printArray)(const T & array))
// {
// 	for(int index = 0; index < length; index++)
// 		printArray(array[index]);
// }


template<typename T>
void	iter(T * array, int length, void(*getArray)(T & array))
{
	for(int index = 0; index < length; index++)
	{
		std::cout << "index: " << index << std::endl;
		getArray(array[index]);
	}
}

#endif