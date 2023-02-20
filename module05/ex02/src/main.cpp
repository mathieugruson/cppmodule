/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 18:13:48 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "TEST 0" << std::endl;
	ShrubberyCreationForm c("c");
	std::cout << "TEST 1" << std::endl;
	Bureaucrat Will("Will", 1);
	std::cout << "TEST 2" << std::endl;
	try
	{
		c.execute(Will);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}