/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:22:49 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 15:37:24 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

#include "Bureaucrat.hpp"
#include "A_Form.hpp"

class RobotomyRequestForm : public A_Form
{
	private:
	/* data */
	RobotomyRequestForm();
	std::string _target;
	public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& obj);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
	~RobotomyRequestForm(void);
	void		execute(Bureaucrat const & executor) const;
	std::string	getTarget(void) const;

};

#endif

