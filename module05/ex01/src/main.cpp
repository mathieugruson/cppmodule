/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 15:51:17 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat mathieu("Mathieu", 150);
	std::cout << mathieu << std::endl;
	
	Bureaucrat anonym;
	std::cout << anonym << std::endl;

	Bureaucrat cyril("Cyril", 1);
	std::cout << cyril << std::endl;

	Bureaucrat cheater(cyril);
	std::cout << "The cheater says he is " << cheater << std::endl;

	cheater = mathieu;
	std::cout << "Now, the cheater says he is " << cheater << std::endl;

	/* TEST INCREMENTATION DECREMENTATION */


	std::cout << "C0" << std::endl;

	try
	{
		cyril.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		mathieu.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	/* TEST EXCEPTION */
	std::cout << "C2" << std::endl;
	try
	{
		Bureaucrat test("test", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat test1("test1", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "DESTRUCTION" << std::endl;

	return 0;
}