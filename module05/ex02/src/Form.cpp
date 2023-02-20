/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:52:15 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:12:28 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Regular form"), _sign(false), _GradeSign(150), _GradeExec(150)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int GradeSign, unsigned int GradeExec) :
_name(name), _sign(false), _GradeSign(GradeSign), _GradeExec(GradeExec) 
{
	if (GradeSign > 150 || GradeExec > 150)
		throw Form::GradeTooLowException();
	else if (GradeSign < 1 || GradeExec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const &obj) : _name(obj.getName()), _GradeSign(obj.getGradeSign()), _GradeExec(obj.getGradeExec())
{
	*this = obj;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

Form &Form::operator=(Form const &obj)
{
	this->_sign = obj.getSign();
	std::cout << "Form Copy assignment operator called" << std::endl;
	return *this;
}

const char * Form::GradeTooLowException::what(void) const throw()
{
	return "It's grade is too low";
}

const char * Form::GradeTooHighException::what(void) const throw()
{
	return "It's grade is too high";
}

const char * Form::FormNotSigned::what(void) const throw()
{
	return "The form is not signed";
}

const std::string Form::getName() const
{
	return this->_name;
}

bool Form::getSign() const
{
	return this->_sign;
}

unsigned int Form::getGradeSign() const
{
	return this->_GradeSign;
}

unsigned int Form::getGradeExec() const
{
	return this->_GradeExec;
}

void Form::checkBeforeExec(const Bureaucrat& obj) const
{
	if (this->_sign == false)
	{
		throw Form::FormNotSigned();
	}
	else if (obj.getGrade() > this->getGradeExec())
	{
		throw Form::GradeTooLowException();
	}
}

std::ostream& operator <<(std::ostream &out, const Form &form)
{
	if (form.getSign() == true)
	{
		out << "The form name is : " << form.getName() << \
		". It requires an grade of " << form.getGradeSign() << " to sign it and a grade of " << \
		form.getGradeExec() << " to execute it\nCurrently, the form signed" << std::endl;
	}
	else
	{
		out << "The form name is : " << form.getName() << \
		". It requires an grade of " << form.getGradeSign() << " to sign it and a grade of " << \
		form.getGradeExec() << " to execute it\nCurrently, the form is unsigned" << std::endl;
	}

	return (out);
}

void Form::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() <= this->getGradeSign())
		this->_sign = true;
	else
		throw Form::GradeTooLowException();
}

