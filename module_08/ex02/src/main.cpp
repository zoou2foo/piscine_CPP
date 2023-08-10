/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:11:43 by vjean             #+#    #+#             */
/*   Updated: 2023/08/10 16:04:07 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack; //instance of MutantStack of type int
	std::list<int>		test;

	mstack.push(5); //we add 5 in the stack
	mstack.push(17); //we add 17 in the stack
	test.push_back(5);
	test.push_back(17);

	std::cout << "What's on top of the stack (after pushing 2 numbers): " << mstack.top() << std::endl; //we print what's on top
	std::cout << "Top of the list: " << test.back() << std::endl;

	mstack.pop(); //we remove element from the top
	test.pop_back();

	std::cout << "size after popping the element from the top: " << mstack.size() << std::endl; //we print the size
	std::cout << "size after popping in list: " << test.size() << std::endl;
	mstack.push(3); //we add 3 in the stack
	mstack.push(5); //we add 5 in the stack
	mstack.push(737); //we add 737 in the stack
	//[...]
	mstack.push(0); //we add 0 in the stack
	test.push_back(3);
	test.push_back(5);
	test.push_back(737);
	test.push_back(0);

	 MutantStack<int>::iterator it = mstack.begin(); //we create an iterator to the begin of the stack
	 MutantStack<int>::iterator ite = mstack.end(); //we create an iterator to the end of the stack

	std::list<int>::iterator it1 = test.begin();
	std::list<int>::iterator ite2 = test.end();
	
	++it;//to make sure the iterator works properly
	--it;
	while (it != ite && it1 != ite2) //while the iterators are not the same
	{
		std::cout << "value: " << *it << std::endl; //we print the value at the iterator
		std::cout << "value in list: " << *it1 << std::endl;
		++it; //we move the iterator (the one from begin())
		++it1;
	}
	std::stack<int> s(mstack); //to test the constructor by copy
	return (0);
}