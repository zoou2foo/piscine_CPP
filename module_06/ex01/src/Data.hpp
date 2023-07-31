/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:56:05 by vjean             #+#    #+#             */
/*   Updated: 2023/07/31 11:07:04 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>
#include <cstdint>
#include <stdexcept>

class Data{

	public:
		Data(void);
		Data(Data const & src);
		~Data(void);

		Data& operator=(Data const & rhs);

	private:
		Data*		deserialize(uintptr_t raw);
		uintptr_t	serialize(Data* ptr);
		int			_dataOne;
		int			_dataTwo;

};

#endif