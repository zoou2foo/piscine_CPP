/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:11:43 by vjean             #+#    #+#             */
/*   Updated: 2023/08/11 08:05:26 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int>	mstack;
	std::list<int>		test; //just to compare with the <stack> container

	mstack.push(5);
	mstack.push(17);
	test.push_front(5); //<list> method version of push.
	test.push_front(17);

	std::cout << "Top of the stack : " << mstack.top() << std::endl;
	std::cout << "Top of the list: " << test.front() << std::endl;

	mstack.pop(); //remove top element
	test.pop_front(); //<list> method version of pop.

	std::cout << "size after pop in stack: " << mstack.size() << std::endl;
	std::cout << "size after pop_front in list: " << test.size() << std::endl;
	std::cout << "\033[35m" << "----Let's add more stuff in the containers----" << std::endl;
	std::cout << std::endl;
	std::cout << "\033[33m" << "----🤖beep beep beep beep beep beep beep beep🤖---" << std::endl;
	std::cout << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	test.push_back(3);
	test.push_back(5);
	test.push_back(737);
	test.push_back(0);
	std::cout << "\033[32m" << "--------------------DONE!----------------------" << std::endl;
	std::cout << "\033[0m";
	MutantStack<int>::iterator it = mstack.begin(); //we create an iterator to the begin of the stack
	MutantStack<int>::iterator ite = mstack.end(); //we create an iterator to the end of the stack

	std::list<int>::iterator it1 = test.begin();
	std::list<int>::iterator ite2 = test.end();

	++it;//to make sure the iterator works properly
	--it;
	while (it != ite && it1 != ite2)
	{
		std::cout << "value: " << *it << std::endl; //to print the stack
		std::cout << "value in list: " << *it1 << std::endl; //to print the list
		++it;
		++it1;
	}
	std::cout << "\033[35m" << "--------Pass MutantStack to actual Stack-------" << std::endl;
	std::cout << "\033[0m";
	std::stack<int> s(mstack);
	while (!s.empty())
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	std::cout << std::endl;

	return (0);
}