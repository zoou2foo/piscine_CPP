/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:09:28 by vjean             #+#    #+#             */
/*   Updated: 2023/06/15 15:07:42 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl Keven;

	Keven.complain("debug");
	Keven.complain("info");
	Keven.complain("warning");
	Keven.complain("error");
	return 0;
}