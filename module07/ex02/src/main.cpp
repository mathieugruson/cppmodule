/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:59:27 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/25 15:20:45 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{

	int * a = new int();
	std::cout << *a << std::endl;
	delete a;
	
	std::string *b = new std::string();
	std::cout << *b << std::endl;
	delete b;
	
	try
	{
		Array<int> integer(42);
		integer[39] = 42;
		std::cout << "size of " << integer.size() << std::endl;
		std::cout << "value of " << integer[39] << std::endl;
		Array<int> integer2(20);
		integer2[0] = 7;
		integer = integer2;
		std::cout << "c1" << std::endl;
		Array<int> integer3(integer2);
		std::cout << "size of " << integer.size() << std::endl;
		std::cout << "value of " << integer2[0] << std::endl;
		std::cout << "value of " << integer3[0] << std::endl;
		std::cout << integer[45] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\nTEST CHAR\n" << std::endl;

	try
	{
		Array<char> integer(42);
		integer[39] = 'z';
		std::cout << "size of " << integer.size() << std::endl;
		std::cout << "value of " << integer[39] << std::endl;
		Array<char> integer2(20);
		integer2[0] = 'A';
		integer = integer2;
		std::cout << "size of " << integer.size() << std::endl;
		std::cout << "value of " << integer2[0] << std::endl;
		std::cout << integer[45] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTEST STRING\n" << std::endl;

	try
	{
		Array<std::string> integer(42);
		integer[39] = "Bob";
		std::cout << "size of " << integer.size() << std::endl;
		std::cout << "value of " << integer[39] << std::endl;
		Array<std::string> integer2(20);
		integer2[0] = "Patrick";
		integer = integer2;
		std::cout << "size of " << integer.size() << std::endl;
		std::cout << "value of " << integer2[0] << std::endl;
		std::cout << integer[45] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}