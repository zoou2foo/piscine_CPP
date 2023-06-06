/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:33:45 by vjean             #+#    #+#             */
/*   Updated: 2023/06/06 08:40:42 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.hpp"
#include <iostream>
#include <cctype>

class PhoneBook {
	//search display
	//iomanip and use setw to fix each column to 10 characters (width)
	public:
		void add(void); //appeler une a une mes setters; checkup des inputs mais pas fermer prog, juste ramener prompt. same for search
		void search(void); //first: display. demande index: get selon l'index (getter de tout le contact demandé) PLUS checkup à faire: index invalide, index vide, index negatif. Attention entre index donné à chaque contact versus leur position dans l'array
		void setIndex(void);

	private:
		Contact contactList[8];
		int		_i = 0;


};


#endif