/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:05:19 by vjean             #+#    #+#             */
/*   Updated: 2023/08/01 11:45:13 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Base
{
	public:
		//Base(void);
		virtual ~Base(void);

};

class A : public Base
{

	public:
};

class B : public Base
{
	public:
};

class C : public Base
{
	public:
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif
