/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:45:39 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 15:11:20 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : A_Form(), _target("Default")
{
	std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : A_Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Overload Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : A_Form(obj)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called" << std::endl;
	this->setSign(obj.getSign());
	this->_target = obj._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->checkBeforeExec(executor);
	std::cout << this->getName() << " was pardoned by President Zaphod Beeblebrox.." << std::endl;
}