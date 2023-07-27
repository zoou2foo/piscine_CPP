/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:49:16 by vjean             #+#    #+#             */
/*   Updated: 2023/07/27 11:54:07 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class PresidentialPardonForm : virtual public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);
		std::string				getTarget(void) const;
		virtual void			execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
		PresidentialPardonForm(void); //Default
};



#endif