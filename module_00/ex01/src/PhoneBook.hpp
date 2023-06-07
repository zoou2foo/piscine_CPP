/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:33:45 by vjean             #+#    #+#             */
/*   Updated: 2023/06/07 15:34:15 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include <iostream>
#include <cctype>

class PhoneBook {

	public:
		PhoneBook(void); //constructor
		~PhoneBook(void); //destructor
		void add(void);
		void search(void);
		int		i;

	private:
		Contact _contactList[8];


};


#endif