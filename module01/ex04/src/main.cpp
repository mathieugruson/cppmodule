/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:13:06 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/10 12:42:17 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <string.h>

#define TEST 0

int main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	std::ifstream	infile;
	std::ofstream	outfile; // return the pointer of the string of the string object newfile to outfile;
	std::string		filetext;
	std::string		s1(argv[2]);
	std::string		s2(argv[3]);
	std::string		newfile;
	int				index(0);

	/* EXTRACT THE FILE */
	infile.open(argv[1]);
	try {
		if (infile.is_open())
		{
			while (infile)
				filetext += infile.get();
			if (TEST)
				std::cout << filetext << std::endl;
			filetext.erase(filetext.length() - 1, 1); // pour eviter un retour bizarre ad il y a plus rien ?
		}
		else
			throw (1);
	}
	catch(int error)
	{
		std::cout << "Invalid file" << std::endl;
		return (0);
	}
	/* FIND IN THE FILE */
	index = filetext.find(s1, index);
	if (index == -1)
	{
		std::cout << "No match" << std::endl;
		return (0);
	}
	else
	{
		while (index > -1)
		{
			filetext.erase(index, s1.length());
			filetext.insert(index, s2);
			index += s2.length();
			index = filetext.find(s1, index + 1); // +1 pour eviter que ca reboucle!
		}
	}
	/* OUTPUT IN THE NEWFILE */
	newfile = argv[1] ;
	newfile += ".replace";
	outfile.open(newfile.c_str());
	outfile << filetext;
	outfile.close();
	infile.close();
	return (0);
}