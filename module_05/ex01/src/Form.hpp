/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:38:55 by valeriejean       #+#    #+#             */
/*   Updated: 2023/07/23 14:46:10 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string name);
		Form(Form const & src);
		~Form(void);

		Form& operator=(Form const & rhs);
		std::string getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		bool		beSigned(Bureaucrat bob);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("too low");
				}
		};


	private:
		std::string const	_name;
		int					_gradeToSign;
		int					_gradeToExecute;
		bool				_signed;
		Form(void); //Default

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);



#endif