/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:09:40 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 16:47:47 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <exception>
#include "A_Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
	/* data */

	public:
	Intern();
	Intern(Intern const &obj);
	~Intern();
	Intern &operator=(Intern const &obj);
	A_Form *makeForm(std::string name, std::string target);

	class FormNotExisting : public std::exception
	{
		public:
		const char * what(void) const throw();
	};
};

#endif
