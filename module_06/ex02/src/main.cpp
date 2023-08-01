/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:59:24 by vjean             #+#    #+#             */
/*   Updated: 2023/08/01 13:45:30 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	Base* res;

	std::cout << "\033[32m" << "-------First, let's generate!-------" << std::endl;
	std::cout << "\033[35m" << "🐱---pew---pew---pew---pew---🐱" << std::endl;
	std::cout << "\033[0m";
	res = generate();
	identify(res);
	identify(*res);

	delete (res);

	return (0);
}