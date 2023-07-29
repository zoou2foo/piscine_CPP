/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 10:21:07 by vjean             #+#    #+#             */
/*   Updated: 2023/07/29 15:47:35 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <typeinfo>

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
					// std::cout << "char: impossible" << std::endl;
					// std::cout << "int: impossible" << std::endl;
					// std::cout << "float: nanf" << std::endl;
					// std::cout << "double: nan" << std::endl;
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
		int			checkInt(void);
		int			checkFloat(void);
		int			checkDouble(void);
		// void		makeChar(void);
		// void		makeInt(void);
		// void		makeFloat(void);
		// void		makeDouble(void);
};

#endif