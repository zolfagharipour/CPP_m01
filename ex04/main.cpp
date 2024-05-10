/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:14:53 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/10 16:18:15 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sifl.hpp"


int	main()
{
	std::ifstream	myFile;
	std::ofstream	newFile;
	std::string		fileName = "example.txt";
	std::string		read;
	std::string		s1 = "world";
	std::string		s2 = "shire";

	myFile.open(fileName, std::ios::in);
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
	newFile.open(fileName + ".replace", std::ios::out);
	if (!newFile.is_open())
	{
		std::cout << fileName << ".replace can not be empty." << std::endl;
		return (0);
	}
	size_t	pos = 0;
	while (getline(myFile, read))
	{
		pos = read.find(s1, pos);
		read.erase(pos, s1.length());
		read.insert(pos, s2);
		newFile << read << std::endl;
	}
}