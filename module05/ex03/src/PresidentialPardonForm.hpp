/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:41:00 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 15:37:20 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "A_Form.hpp"

class PresidentialPardonForm : public A_Form
{
	private:
	/* data */
	PresidentialPardonForm();
	std::string _target;
	public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& obj);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
	~PresidentialPardonForm(void);
	void	execute(Bureaucrat const & executor) const;
	std::string getTarget(void) const;

};

#endif