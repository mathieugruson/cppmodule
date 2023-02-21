/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:52:15 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 14:24:58 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Form.hpp"

A_Form::A_Form() : _name("Regular A_Form"), _sign(false), _GradeSign(150), _GradeExec(150)
{
	std::cout << "A_Form Default Constructor called" << std::endl;
}

A_Form::A_Form(std::string name, unsigned int GradeSign, unsigned int GradeExec) :
_name(name), _sign(false), _GradeSign(GradeSign), _GradeExec(GradeExec) 
{
	if (GradeSign > 150 || GradeExec > 150)
		throw A_Form::GradeTooLowException();
	else if (GradeSign < 1 || GradeExec < 1)
		throw A_Form::GradeTooHighException();
}

A_Form::A_Form(A_Form const &obj) : _name(obj.getName()), _GradeSign(obj.getGradeSign()), _GradeExec(obj.getGradeExec())
{
	*this = obj;
}

A_Form::~A_Form()
{
	std::cout << "A_Form Destructor called" << std::endl;
}

A_Form &A_Form::operator=(A_Form const &obj)
{
	this->_sign = obj.getSign();
	std::cout << "A_Form Copy assignment operator called" << std::endl;
	return *this;
}

const char * A_Form::GradeTooLowException::what(void) const throw()
{
	return "It's grade is too low";
}

const char * A_Form::GradeTooHighException::what(void) const throw()
{
	return "It's grade is too high";
}

const char * A_Form::A_FormNotSigned::what(void) const throw()
{
	return "The Form is not signed, it cannot be executed";
}

const std::string A_Form::getName() const
{
	return this->_name;
}

bool A_Form::getSign() const
{
	return this->_sign;
}

void A_Form::setSign(bool sign)
{
	this->_sign = sign;
}

unsigned int A_Form::getGradeSign() const
{
	return this->_GradeSign;
}

unsigned int A_Form::getGradeExec() const
{
	return this->_GradeExec;
}

void A_Form::checkBeforeExec(const Bureaucrat& obj) const
{
	if (this->_sign == false)
	{
		throw A_Form::A_FormNotSigned();
	}
	else if (obj.getGrade() > this->getGradeExec())
	{
		throw A_Form::GradeTooLowException();
	}
}

void A_Form::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() <= this->getGradeSign())
		this->_sign = true;
	else
		throw A_Form::GradeTooLowException();
}

std::ostream& operator <<(std::ostream &out, const A_Form &A_Form)
{
	if (A_Form.getSign() == true)
	{
		out << "The A_Form name is : " << A_Form.getName() << \
		". It requires an grade of " << A_Form.getGradeSign() << " to sign it and a grade of " << \
		A_Form.getGradeExec() << " to execute it\nCurrently, the A_Form signed" << std::endl;
	}
	else
	{
		out << "The A_Form name is : " << A_Form.getName() << \
		". It requires an grade of " << A_Form.getGradeSign() << " to sign it and a grade of " << \
		A_Form.getGradeExec() << " to execute it\nCurrently, the A_Form is unsigned" << std::endl;
	}

	return (out);
}


