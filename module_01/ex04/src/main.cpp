/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 07:57:04 by vjean             #+#    #+#             */
/*   Updated: 2023/06/14 11:20:27 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		//look at the arguments passed
		//first: check if the first arg is a file
		std::ifstream inputFile;
		inputFile.open(av[1]);
		if (!inputFile.is_open())
			std::cout << "Error: can't open " << av[1] << ". Make sure that it is a file or you have the rights." << std::endl;
		else
		{
			//create the replacement file
			std::ofstream outputFile;
			outputFile.open("test.replace");
			if (inputFile.is_open() && outputFile.is_open())
			{
				//time to search and replace
				std::string line;
				while (inputFile.eof())
				{
					getline(inputFile, line);
					if (line.find(av[2])) //if found
					{
						line = line.erase(0, av[2].length);
						line = line.insert(0, av[3].length);
						//outputFile << line << std::endl; //maybe not the right place to do it
					}
					else
						outputFile << line << std::endl;
				}
			}
				//outputFile << inputFile.rdbuf(); //after no need of inputFile, we can close it
			else
			{
				std::cout << "Error with creating new file" << std::endl;
				exit;
			}
		}
	}
	else
		std::cout << "You must add 3 arguments with the executable" << std::endl;
	return 0;
}