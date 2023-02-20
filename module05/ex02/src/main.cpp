/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:22:12 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "TEST Shrubbery" << std::endl;
	ShrubberyCreationForm c("c");
	Bureaucrat Will("Will", 1);
	Will.signForm(c);
	try
	{
		c.execute(Will);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
}