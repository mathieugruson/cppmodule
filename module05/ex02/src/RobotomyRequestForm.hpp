/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:22:49 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:27:56 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP_HPP

#include <iostream>
#include <fstream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
	/* data */
	RobotomyRequestForm();

	public:
	RobotomyRequestForm(const RobotomyRequestForm& obj);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	void execute(const Bureaucrat& b) const;

};

#endif

