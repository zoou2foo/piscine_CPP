/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valeriejean <valeriejean@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 07:57:04 by vjean             #+#    #+#             */
/*   Updated: 2023/06/14 17:23:36 by valeriejean      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

void	search_n_replace(std::string s1, std::string s2, std::string line)
{
	size_t	pos = 0;

	while ((pos = line.find(s1, pos)) != std::string::npos)
	{
		line.erase(pos, s1.length);
		line.insert(pos, s2);
		pos += s2.length;
	}
}

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
				//need to check if s1 and s2 are empty
				std::string s1 = av[2];
				std::string s2 = av[3];
				if (s1.length() == 0 && s2.length() == 0)
				{
					std::cout << "Error: args are empty" << std::endl;
				}
				std::string line;
				//while (!inputFile.eof())
				search_n_replace(s1, s2, line);
				//while (getline(inputFile, line))
				//{
					//getline(inputFile, line);
					// if (line.find(av[2])) //if found
					// {
					// 	//std::cout << "found av[2]" << std::endl;
					// 	line.erase(0, s1.length());
					// 	line.insert(0, s2.length());
					// 	outputFile << line << std::endl;
					// }
					// else
					// {
					// 	std::cout << "here or not" << std::endl;
					// 	outputFile << line << std::endl;
					// }
				//}
			}
				//outputFile << inputFile.rdbuf(); //after no need of inputFile, we can close it
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