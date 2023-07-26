/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:53:03 by vjean             #+#    #+#             */
/*   Updated: 2023/07/26 09:14:59 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : virtual public AForm
{
	public:
		ShrubberyCreationForm(void); //Default
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & rhs);
		std::string				getTarget(void) const;
		virtual void			execute(Bureaucrat const & executor) const;



	private:
		std::string	_target;
};



#endif