/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:09:28 by vjean             #+#    #+#             */
/*   Updated: 2023/06/16 11:33:30 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl Keven;

	if (ac == 2)
	{
		std::string levelChosen = av[1];
		Keven.complain(levelChosen);
	}
	else
		std::cout << "Need one argument with the executable: debug, info, warning or error" << std::endl;
	return 0;
}