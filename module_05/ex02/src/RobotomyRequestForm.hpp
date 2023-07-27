/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:51:29 by vjean             #+#    #+#             */
/*   Updated: 2023/07/27 11:55:09 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class RobotomyRequestForm : virtual public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);
		std::string			getTarget(void) const;
		virtual void		execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
		RobotomyRequestForm(void); //Default
};

#endif