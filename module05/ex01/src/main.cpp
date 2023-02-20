/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 16:27:31 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "TEST 0" << std::endl;
	
	Form Visa("Travel Permit", 50, 150);
	std::cout << Visa << std::endl;
	std::cout << "TEST 0bis" << std::endl;

	Form Esta(Visa);
	std::cout << Esta << std::endl;
	std::cout << "TEST 0ter" << std::endl;
	Form Ata;
	Ata = Visa;
	std::cout << Ata << std::endl;

	std::cout << "TEST 1" << std::endl;
	try
	{
		Bureaucrat Mathieu("Mathieu", 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "TEST 2" << std::endl;
	try
	{
		Form BuildingPermit("Building Permit", 50, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "TEST 3" << std::endl;
	try
	{
		Form BuildingPermit("Building Permit", 50, 150);
		Bureaucrat Mathieu("Mathieu", 150);
		BuildingPermit.beSigned(Mathieu);
		std::cout << BuildingPermit << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "TEST 4" << std::endl;
	try
	{
		Form BuildingPermit("Building Permit", 50, 150);
		Bureaucrat Mathieu("Mathieu", 50);
		BuildingPermit.beSigned(Mathieu);
		std::cout << BuildingPermit << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "TEST 5" << std::endl;
	try
	{
		Form BuildingVIPPermit("Building VIP Permit", 1, 1);
		Bureaucrat Mathieu("Mathieu", 50);
		Mathieu.signForm(BuildingVIPPermit);
		std::cout << BuildingVIPPermit << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "TEST 6" << std::endl;
	try
	{
		Form BuildingVIPPermit("Building VIP Permit", 1, 1);
		Bureaucrat Mathieu("Mathieu", 1);
		Mathieu.signForm(BuildingVIPPermit);
		std::cout << BuildingVIPPermit << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}