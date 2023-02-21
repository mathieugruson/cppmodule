/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:09:45 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 16:50:04 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default Constructor called" << std::endl;
}
Intern::Intern(Intern const &obj)
{
	*this = obj;
}
Intern::~Intern()
{
	std::cout << "Intern Destructor called" << std::endl;
}
Intern &Intern::operator=(Intern const &obj)
{
	(void)obj;
	std::cout << "Intern Copy assignment operator called" << std::endl;
	return *this;
}

const char * Intern::FormNotExisting::what(void) const throw()
{
	return "The Form does not exist";
}

A_Form	*Intern::makeForm(std::string name, std::string target)
{
	std::string	names[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	A_Form	forms[3] =  {PresidentialPardonForm(target), RobotomyRequestForm(target), ShrubberyCreationForm(target)};

	for (int i = 0; i < 3; i++)
	{
		if (names[i] == name)
		{
			std::cout << "Intern creates a form for " << name << std::endl;
			return (new forms[i])
		}
	}
	throw Intern::FormNotExisting();
	return (NULL);
}