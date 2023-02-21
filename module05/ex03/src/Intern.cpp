/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:09:45 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 17:47:11 by mgruson          ###   ########.fr       */
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
	return "The Form asked does not exist";
}

A_Form	*Intern::makeForm(const std::string form, const std::string target)
{
	const std::string	forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	int i = 0;
	
	while (i < 3 && forms[i] != form)
		i++;
	switch (i)
	{
		case 0 :
			std::cout << "Intern creates a " << forms[0] << " form." << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1 :
			std::cout << "Intern creates a " << forms[1] << " form." << std::endl;
			return (new RobotomyRequestForm(target));
		case 2 :
			std::cout << "Intern creates a " << forms[1] << " form." << std::endl;
			return (new PresidentialPardonForm(target));
		default :
			throw (Intern::FormNotExisting());
	}
}