/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:22:49 by vjean             #+#    #+#             */
/*   Updated: 2023/07/06 11:59:49 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{

	try
	{
		Bureaucrat Louis("Binouche", 10);
		//Bureaucrat Gerard("Chose", -42);
		Bureaucrat Louisa("Bob", 5);
		std::cout << Louisa << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return (0);
}