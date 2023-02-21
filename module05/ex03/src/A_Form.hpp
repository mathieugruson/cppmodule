/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:44:04 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 14:01:04 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_Form_HPP
#define A_Form_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class A_Form
{
	private:
	const std::string	_name;
	bool 				_sign;
	const unsigned int	_GradeSign;
	const unsigned int	_GradeExec;

	public:
	A_Form();
	A_Form(std::string name, unsigned int GradeSign, unsigned int GradeExec);
	A_Form(A_Form const &obj);
	virtual ~A_Form();
	A_Form &operator=(A_Form const &obj);

	const std::string	getName() const;
	bool				getSign() const ;
	unsigned int		getGradeSign() const;
	unsigned int		getGradeExec() const;
	void 				beSigned(Bureaucrat const &obj);
	virtual void		execute(Bureaucrat const & executor) const = 0;
	void				checkBeforeExec(const Bureaucrat& b) const;
	void				setSign(bool sign);
	
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
	class A_FormNotSigned : public std::exception
	{
		public:
		  const char * what(void) const throw();
	};
};

std::ostream& operator <<(std::ostream &out, const A_Form &obj);


#endif
