/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:21:07 by vjean             #+#    #+#             */
/*   Updated: 2023/08/01 14:11:05 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <typeinfo>
#include <climits>

class Convert
{
	public:
		Convert(void);
		Convert(Convert const & src);
		~Convert(void);

		Convert&	operator=(Convert const & rhs);
		std::string	getType(void) const;
		std::string getArg(void) const;
		void		setType(std::string type);
		void		setArg(std::string arg);
		void		pseudoLit(void);
		void		parseArg(void);
		void		doConversion(void);
		void		printResult(void);

		class PseudoLitException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("char: impossible\nint: impossible\nfloat: nanf\ndouble: nan");
				}
		};

	private:
		std::string _type;
		std::string _arg;
		char		_resChar;
		int			_resInt;
		float		_resFloat;
		double		_resDouble;
		int			_stoiNotWorking;
		int			checkInt(void);
		int			checkFloat(void);
		int			checkDouble(void);
};

#endif