/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:05:40 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 15:12:22 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "A_Form.hpp"

class A_Form;

class Bureaucrat
{
	private:
	const std::string _name;
	unsigned int _grade;
	
	public:
	Bureaucrat();
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const &obj);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &obj);
	const std::string getName() const;
	unsigned int getGrade() const;
	void	incrementGrade();
	void	decrementGrade();
	void	signForm(A_Form &obj) const;
	void	executeForm(const A_Form & A_form);
	
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

std::ostream& operator <<(std::ostream &out, const Bureaucrat &bureaucrat);


#endif