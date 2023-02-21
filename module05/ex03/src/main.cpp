/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 18:16:32 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "Test intern OK\n" << std::endl;
	try
	{
		Bureaucrat a("a", 1);
		Intern b;

		A_Form* rrf;
		rrf = b.makeForm("robotomy request", "Blender");

		a.signForm(*rrf);

		std::cout << *rrf << std::endl;
		std::cout << std::endl;
		a.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Test intern OK\n" << std::endl;
	try
	{
		Bureaucrat a("a", 1);
		Intern b;

		A_Form* rrf;
		rrf = b.makeForm("shrubbery creation", "Banger");

		a.signForm(*rrf);

		std::cout << *rrf << std::endl;
		std::cout << std::endl;
		a.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Test intern OK\n" << std::endl;
	try
	{
		Bureaucrat a("a", 1);
		Intern b;

		A_Form* rrf;
		rrf = b.makeForm("presidential pardon", "Badder");

		a.signForm(*rrf);

		std::cout << *rrf << std::endl;
		std::cout << std::endl;
		a.executeForm(*rrf);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTest intern KO\n" << std::endl;

	try
	{
		Bureaucrat a("a", 1);
		Intern b;

		A_Form* rrf2;
		rrf2 = b.makeForm("street request", "Banger");

		a.signForm(*rrf2);

		std::cout << *rrf2 << std::endl;
		std::cout << std::endl;
		a.executeForm(*rrf2);
		delete rrf2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}