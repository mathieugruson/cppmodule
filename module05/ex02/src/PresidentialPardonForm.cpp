/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:39 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:46:17 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj)
{
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	(void)obj;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 145, 137)
{
	std::cout << "PresidentialPardonForm Overload Constructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& obj) const
{
	this->checkBeforeExec(obj);
}