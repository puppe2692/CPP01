/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwyseur <nwyseur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:21:12 by nwyseur           #+#    #+#             */
/*   Updated: 2023/08/14 10:56:07 by nwyseur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;
	std::string		s1;
	std::string		s2;
	std::string		filename;
	size_t			pos;

	if (argc != 4)
	{
		std::cout << "Wrong number of inputs (3 strings)" << std::endl;
		return (1);
	}
	s1 = std::string(argv[2]); // pour convertir argv[2] en string
	s2 = std::string(argv[3]);
	infile.open(argv[1]);
	if (infile.is_open())
	{
		filename = std::string(argv[1]) + ".replace";
		outfile.open(filename);
		if (!outfile.is_open())
		{
			infile.close();
			std::cout << "Unable to open outfile" << std::endl;
			return (1);
		}
		while (std::getline(infile, line))
		{
			if (line.compare(s1) == 0)
				outfile << s2 << std::endl;
			else if (line.find(s1) != std::string::npos)
			{
				while (line.find(s1) != std::string::npos)
				{
					pos = line.find(s1);
					line.erase(pos, s1.length());
					line.insert(pos, s2);
				}
				outfile << line << std::endl;
			}
			else
				outfile << line << std::endl;
		}
		infile.close();
		outfile.close();
	}
	else
	{
		std::cout << "Unable to open infile" << std::endl;
		return (1);
	}
	return (0);
}