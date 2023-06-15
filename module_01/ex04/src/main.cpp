/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjean <vjean@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 07:57:04 by vjean             #+#    #+#             */
/*   Updated: 2023/06/15 14:09:54 by vjean            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		//first: check if the first arg is a file
		std::ifstream inputFile;
		inputFile.open(av[1]);
		if (!inputFile.is_open() || (inputFile.peek() == std::ifstream::traits_type::eof())) //if file is empty
			std::cout << "Error: can't open " << av[1] << ". Make sure that it is a file or you have the rights. Also, make sure that the file is not empty" << std::endl;
		else
		{
			std::string s1 = av[2];
			std::string s2 = av[3];
			if ((s1.length() == 0 && s2.length() == 0) || (s1.compare(" ") == 0 || s2.compare(" ") == 0) || (s1.compare("	") == 0 || s2.compare("	") == 0))
			{
				std::cout << "Error: args are empty" << std::endl;
				return (1);
			}
			//create the replacement file
			std::ofstream outputFile;
			outputFile.open("test.replace");
			if (inputFile.is_open() && outputFile.is_open())
			{
				//time to search and replace
				std::string line;
				while (getline(inputFile, line))
				{
					int	pos = 0;
					size_t found = line.find(s1);
					if (found != std::string::npos) //if found
					{
						line.erase(found, s1.length());
						line.insert(found, s2);
						outputFile << line << std::endl;
						pos += s2.length();
					}
					else //nothing found
						outputFile << line << std::endl;
				}
			}
			else
			{
				std::cout << "Error with creating new file" << std::endl;
				return 0;
			}
		}
	}
	else
		std::cout << "You must add 3 arguments with the executable" << std::endl;
	return 0;
}