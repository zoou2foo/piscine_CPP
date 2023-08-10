/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 08:56:32 by vjean             #+#    #+#             */
/*   Updated: 2023/08/10 11:08:38 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::vector<int> 			num; //call random to fill up with stuff
	// std::vector<int>::iterator	it;
	// it = num.begin();
	int	capSize = 10000;
	srand(time(NULL));
	for (int index = 0; index <= capSize; ++index)
	{
		num.push_back((rand()));
	}

	//Just to check what I've got in my container num
	// for (std::vector<int>::iterator it2 = num.begin(); it2 != num.end(); ++it2)
	// {
	// 	int num = *it2;
	// 	std::cout << num << std::endl;
	// }

	Span sp = Span(2000);

	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	sp.addNumberAtLarge(num);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return (0);
}