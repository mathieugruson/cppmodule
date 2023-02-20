/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:06:31 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 16:00:58 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Faceless"), _grade(150)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
			throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat Overload Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj.getName())
{
	*this = obj;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj)
{
	std::cout << "Bureaucrat Copy assignment operator called" << std::endl;
	this->_grade = obj._grade;
	return *this;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::incrementGrade()
{
		if (this->_grade != 1)
			this->_grade--;
		else
			throw Bureaucrat::GradeTooHighException();
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "It's grade is too low";
}

void	Bureaucrat::decrementGrade()
{
		if (this->_grade != 150)
			this->_grade++;
		else
			throw Bureaucrat::GradeTooLowException();
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "It's grade is too high";
}

void	Bureaucrat::signForm(Form &obj) const
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << obj.getName() << " because "<< e.what() << std::endl;
	}
}

std::ostream& operator <<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}