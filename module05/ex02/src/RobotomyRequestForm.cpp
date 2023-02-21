/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:22:46 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 15:43:37 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : A_Form(), _target("Default")
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : A_Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Overload Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	this->setSign(obj.getSign());
	this->_target = obj._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->checkBeforeExec(executor);
	// int	r = std::rand();
	if (std::rand() % 2)
		std::cout << "Iiiiiiiiiiiiiiiiiiiiiiiii " << this->_target << " has been robotomised." << std::endl;
	else
		std::cout << "Iiiiiiiiiiiiiiiiiiiiiiiii " << this->_target << "robotomisation did not succeed" << std::endl;
}