/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:06:31 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 12:51:59 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Faceless"), _grade(150)
{
	std::cout << "Bureaucrat Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade)
{
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
	try
	{
		if (this->_grade != 1)
			this->_grade--;
		else
			throw this->_grade;
	}
	catch (unsigned int grade)
	{
		std::cout << "A grade of " << grade << " can't be incremented " << std::endl;
	}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade != 150)
			this->_grade++;
		else
			throw this->_grade;
	}
	catch (unsigned int grade)
	{
		std::cout << "A grade of " << grade << " can't be decremeted" << std::endl;
	}
}

std::ostream& operator <<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}