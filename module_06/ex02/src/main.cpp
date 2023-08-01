/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:59:24 by vjean             #+#    #+#             */
/*   Updated: 2023/08/01 11:45:33 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

//1.first need to create an instance of either A, B or C: RANDOMLY: done by
//function generate
//2.then use identify(Base* p) to print the actual type of the object pointed by p
//that was generated previously
//3.Finally, call identify(Base& p) to print the actual type of the object pointed by p
//WITHOUT using a pointer

int main(void)
{
	Base* res;

	res = generate();


	delete (res);

	return (0);
}