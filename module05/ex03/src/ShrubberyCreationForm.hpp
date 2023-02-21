/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationA_Form.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:18:09 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 14:30:25 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONA_Form_HPP
#define SHRUBBERYCREATIONA_Form_HPP

#include <iostream>
#include <fstream>
#include <string>

#include "Bureaucrat.hpp"
#include "A_Form.hpp"

class ShrubberyCreationForm : public A_Form
{
	private:
	/* data */
	ShrubberyCreationForm();
	std::string _target;
	public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& obj);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
	~ShrubberyCreationForm(void);
	void	execute(Bureaucrat const & executor) const;
	std::string getTarget(void) const;
};


#endif