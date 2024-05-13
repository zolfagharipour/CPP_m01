/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:14:53 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/13 14:51:14 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"

// ask what is meant by takes 3 parameter and create some other function


int	main()
{
	std::ifstream	myFile;
	std::ofstream	newFile;
	std::string		fileName = "example";
	std::string		read;
	std::string		s1 = "school";
	std::string		s2 = "prison";

	myFile.open(fileName.c_str(), std::ios::in);
	if (!myFile.is_open())
	{
		std::cout << fileName << " can not be open." << std::endl;
		return (0);
	}
	else if (s1 == "")
	{
		std::cout << "S1 can not be empty." << std::endl;
		return (0);
	}
	newFile.open((fileName + ".replace").c_str(), std::ios::out);
	if (!newFile.is_open())
	{
		std::cout << fileName << ".replace can not be empty." << std::endl;
		return (0);
	}
	size_t	pos = 0;
	while (getline(myFile, read))
	{
		pos = 0;
		pos = read.find(s1, pos);
		while (pos < read.length())
		{
			read.erase(pos, s1.length());
			read.insert(pos, s2);
			pos = read.find(s1, pos);
		}
		newFile << read << std::endl;
	}
}