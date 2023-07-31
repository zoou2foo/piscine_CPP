/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:56:05 by vjean             #+#    #+#             */
/*   Updated: 2023/07/31 16:52:26 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdint>
#include <stdexcept>

class Data{

	public:
		Data(void);
		Data(Data const & src);
		~Data(void);

		Data& 		operator=(Data const & rhs);
		std::string	getDataOne(void) const;
		int			getDataTwo(void) const;
		size_t		getDataThree(void) const;

	private:
		std::string	_dataOne;
		int		_dataTwo;
		size_t	_dataThree;

};

Data*		deserialize(uintptr_t raw);
uintptr_t	serialize(Data* ptr);

#endif