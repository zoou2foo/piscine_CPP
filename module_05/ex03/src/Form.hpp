/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:38:55 by valeriejean       #+#    #+#             */
/*   Updated: 2023/07/27 11:59:44 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void); //Default
		AForm(std::string name, int gradeToSign, int gradeToExecute);
		AForm(AForm const & src);
		virtual ~AForm(void);

		AForm& 			operator=(AForm const & rhs);
		std::string 	getName(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;
		std::string		getSignedOrNot(void) const;
		void			beSigned(Bureaucrat& signatory);
		void			verifyExec(Bureaucrat const & executor) const;
		virtual void	execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form grade is too high!");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Form grade is too low!");
				}
		};
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return("Form grade is not signed!");
				}
		};


	private:
		std::string const	_name;
		int					_gradeToSign;
		int					_gradeToExecute;
		bool				_signed;

};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif