/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 11:36:52 by vjean             #+#    #+#             */
/*   Updated: 2023/06/26 14:11:31 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap(); //default
		ScavTrap(ScavTrap const & src); //copy constructor
		~ScavTrap(); //destructor

		ScavTrap &	operator=( ScavTrap const & rhs );
		void	guardGate(void);
		void	attack(const std::string& target);

	private:

};

//creer une fonction pour overwrite le message de attack() de ClapTrap

#endif /* ******************************************************** SCAVTRAP_H */