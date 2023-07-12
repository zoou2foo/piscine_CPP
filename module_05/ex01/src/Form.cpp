/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriejean <valeriejean@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:38:57 by valeriejean       #+#    #+#             */
/*   Updated: 2023/07/12 16:31:56 by valeriejean      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class Form
{
    public:
        Form(std::string name, int grade);
        Form(Form const & src);
        ~Form(void);
        
        Form& operator=(Form const & rhs);
        std::string getName(void) const;
        int         getGrade(void) const;

    private:
        std::string const   _name;
        int                 _grade;
        bool                _signed;
        Form(void);
        
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);



#endif