/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:41:00 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:42:13 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
	/* data */
	PresidentialPardonForm();

	public:
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	void execute(const Bureaucrat& obj) const;

};

#endif