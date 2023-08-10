/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:11:43 by vjean             #+#    #+#             */
/*   Updated: 2023/08/10 15:41:33 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack; //instance of MutantStack of type int

	mstack.push(5); //we add 5 in the stack
	mstack.push(17); //we add 17 in the stack

	std::cout << "What's on top of the stack (after pushing 2 numbers): " << mstack.top() << std::endl; //we print what's on top

	mstack.pop(); //we remove element from the top

	std::cout << "size after popping the element from the top: " << mstack.size() << std::endl; //we print the size

	mstack.push(3); //we add 3 in the stack
	mstack.push(5); //we add 5 in the stack
	mstack.push(737); //we add 737 in the stack
	//[...]
	mstack.push(0); //we add 0 in the stack

	 MutantStack<int>::iterator it = mstack.begin(); //we create an iterator to the begin of the stack
	 MutantStack<int>::iterator ite = mstack.end(); //we create an iterator to the end of the stack

	++it;//to make sure the iterator works properly
	--it;
	while (it != ite) //while the iterators are not the same
	{
		std::cout << "value: " << *it << std::endl; //we print the value at the iterator
		++it; //we move the iterator (the one from begin())
	}
	std::stack<int> s(mstack); //to test the constructor by copy
	return (0);
}