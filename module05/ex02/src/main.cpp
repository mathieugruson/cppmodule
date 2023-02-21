/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 16:03:46 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "TEST ShrubberyCreationForm\n" << std::endl;
	{

	ShrubberyCreationForm c("c");
	ShrubberyCreationForm e("e");
	std::cout << c.getName() << std::endl;
	std::cout << c.getTarget()<< std::endl;
	ShrubberyCreationForm d(c);
	e = c;
	
	std::cout << c.getTarget() << " + " << c  << std::endl;
	std::cout << d.getTarget() << " + " << d  << std::endl;
	std::cout << e.getTarget() << " + " << e  << std::endl;

	Bureaucrat Will("Will", 146);
	Bureaucrat Amelie("Amelie", 136);

	try
	{
		c.execute(Will);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Will.signForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Will.incrementGrade();
	try
	{
		Will.signForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c.execute(Will);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c.execute(Amelie);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Destructor\n" << std::endl;
	}

	/******************************************************/
	std::cout << "\nTEST RobotomyRequestForm\n" << std::endl;
	{
	RobotomyRequestForm c("c");
	RobotomyRequestForm e("e");
	std::cout << c.getName() << std::endl;
	std::cout << c.getTarget()<< std::endl;
	RobotomyRequestForm d(c);
	e = c;
	
	std::cout << c.getTarget() << " + " << c  << std::endl;
	std::cout << d.getTarget() << " + " << d  << std::endl;
	std::cout << e.getTarget() << " + " << e  << std::endl;

	Bureaucrat Will("Will", 72);
	Bureaucrat Amelie("Amelie", 45);

	try
	{
		Will.executeForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Will.signForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Will.decrementGrade();
	try
	{
		c.beSigned(Will);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c.execute(Amelie);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Destructor\n" << std::endl;
	}

	/******************************************************/
	std::cout << "\nTEST PresidentialPardonForm\n" << std::endl;
	{

	PresidentialPardonForm c("c");
	PresidentialPardonForm e("e");
	std::cout << c.getName() << std::endl;
	std::cout << c.getTarget()<< std::endl;
	PresidentialPardonForm d(c);
	e = c;
	
	std::cout << c.getTarget() << " + " << c  << std::endl;
	std::cout << d.getTarget() << " + " << d  << std::endl;
	std::cout << e.getTarget() << " + " << e  << std::endl;

	Bureaucrat Will("Will", 146);
	Bureaucrat Amelie("Amelie", 136);
	Bureaucrat Obama("Obama", 1);
	try
	{
		Will.signForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Will.incrementGrade();
	try
	{
		c.beSigned(Will);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c.execute(Will);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		c.execute(Amelie);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Obama.signForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Obama.executeForm(c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Destructor\n" << std::endl;
	}
	return 0;
}