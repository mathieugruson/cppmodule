/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:22:46 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:36:47 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj)
{
	*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called" << std::endl;
	(void)obj;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 145, 137)
{
	std::cout << "RobotomyRequestForm Overload Constructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& obj) const
{
	this->checkBeforeExec(obj);
	int	r = rand();
	if (realloc % 2)
		std::cout << "Iiiiiiiiiiiiiiiiiiiiiiiii " << this->_target << " has been robotomised." << std::endl;
	else
		std::cout << "Iiiiiiiiiiiiiiiiiiiiiiiii " << this->_target << "robotomisation did not succeed" << std::endl;
}