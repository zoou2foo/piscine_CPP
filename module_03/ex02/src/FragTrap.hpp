/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:16:31 by vjean             #+#    #+#             */
/*   Updated: 2023/06/26 15:31:54 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap(void);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap &		operator=( FragTrap const & rhs );
		void 			highFivesGuys(void);

	private:

};


#endif /* ******************************************************** FRAGTRAP_H */