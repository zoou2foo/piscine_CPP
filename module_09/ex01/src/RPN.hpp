/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:09:09 by vjean             #+#    #+#             */
/*   Updated: 2023/08/17 15:37:02 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <string>


class RPN
{
	public:
		RPN(void);
		~RPN(void);

		void		executeProg(std::string rpnExp);
		std::string	getRPNexp(void) const;
		void		setRPNexp(std::string rpnExp);
		void		doTheMath(char op);

	private:
		RPN(RPN const & src);
		RPN& 			operator=(RPN const & rhs);
		std::string		_rpnExp;
		std::stack<int>	_myContainer;

};


#endif