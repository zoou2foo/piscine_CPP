/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:08:45 by vjean             #+#    #+#             */
/*   Updated: 2023/08/01 13:50:50 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

/******************************************************************************/
/*								CONSTRUCTORS								  */
/******************************************************************************/


/******************************************************************************/
/*								DESTRUCTOR									  */
/******************************************************************************/

Base::~Base(void)
{
	//std::cout << "Base destructor called" << std::endl;
	return;
}


/******************************************************************************/
/*						ASSIGNATION & OVERLOAD OPERATOR						  */
/******************************************************************************/


/******************************************************************************/
/*								GETTER & SETTER								  */
/******************************************************************************/


/******************************************************************************/
/*								MEMBER FUNCTIONS							  */
/******************************************************************************/

Base* generate(void)
{
	srand(time(NULL));
	int	randomNo = rand() % 3 + 1;
	if (randomNo == 1)
	{
		Base* ptr = new A();
		return (ptr);
	}
	else if (randomNo == 2)
	{
		Base* ptr = new B();
		return (ptr);
	}
	else if (randomNo == 3)
	{
		Base* ptr = new C();
		return (ptr);
	}
	return (NULL);
}

void	identify(Base* p)
{
	std::cout << "\033[32m" << "-------Via identify(Base* p)-------" << std::endl;
	std::cout << "\033[0m";
	if (dynamic_cast<A*>(p))
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type: C" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "\033[32m" << "-------Via identify(Base& p)-------" << std::endl;
	std::cout << "\033[0m";
	try
	{
		A& test = dynamic_cast<A&>(p);
		(void)test;
		std::cout << "Type: A 🥳" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
		std::cout << "Not type A 😭" << std::endl;
	}
	try
	{
		B& test = dynamic_cast<B&>(p);
		(void)test;
		std::cout << "Type: B 🥳" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
		std::cout << "Not type B 😭" << std::endl;
	}
	try
	{
		C& test = dynamic_cast<C&>(p);
		(void)test;
		std::cout << "Type: C 🥳" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
		std::cout << "Not type C 😭" << std::endl;
	}
}