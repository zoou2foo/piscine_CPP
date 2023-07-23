/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:54 by vjean             #+#    #+#             */
/*   Updated: 2023/07/23 14:02:59 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade); //constructor
		Bureaucrat(Bureaucrat const & src); //copy constructor
		~Bureaucrat(void); //destructor

		Bureaucrat&	operator=(Bureaucrat const & rhs);
		std::string	getName(void) const; //getter for name
		int			getGrade(void) const; //getter for grade
		void		incrementGrade(void);
		void		decrementeGrade(void);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw()
				{
					return ("Already at the top of your game! Can't go higher than that!");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Already at the bottom of the barrel! Can't go below that!");
				}
		};

	private:
		std::string const	_name;
		int					_grade;
		Bureaucrat(void); //default constructor
};


std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif