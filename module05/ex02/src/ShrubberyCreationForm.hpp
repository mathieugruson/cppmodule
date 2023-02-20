/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:18:09 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 17:51:06 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
	/* data */
	ShrubberyCreationForm();

	public:
	ShrubberyCreationForm(const ShrubberyCreationForm& obj);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	void execute(const Bureaucrat& b) const;

};

#endif