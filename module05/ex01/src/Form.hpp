/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:44:04 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 16:06:04 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
	const std::string	_name;
	bool 				_sign;
	const unsigned int	_GradeSign;
	const unsigned int	_GradeExec;

	public:
	Form();
	Form(std::string name, unsigned int GradeSign, unsigned int GradeExec);
	Form(Form const &obj);
	~Form();
	Form &operator=(Form const &obj);

	const std::string	getName() const;
	bool				getSign() const ;
	unsigned int		getGradeSign() const;
	unsigned int		getGradeExec() const;
	void 				beSigned(Bureaucrat const &obj);

	class GradeTooHighException : public std::exception
	{
		public:
		const char * what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char * what(void) const throw();
	};
};

std::ostream& operator <<(std::ostream &out, const Form &form);


#endif