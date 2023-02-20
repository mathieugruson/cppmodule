/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/20 12:52:56 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat mathieu("Mathieu", 150);
	std::cout << mathieu << std::endl;
	
	Bureaucrat anonym;
	std::cout << anonym << std::endl;

	Bureaucrat cyril("Cyril", 1);
	std::cout << cyril << std::endl;

	Bureaucrat cheater(cyril);
	std::cout << "The cheater says he is " << cheater << std::endl;

	cheater = mathieu;
	std::cout << "Now, the cheater says he is " << cheater << std::endl;

	/* TEST INCREMENTATION DECREMENTATION */

	cyril.incrementGrade();
	mathieu.decrementGrade();
	while (anonym.getGrade() > 1)
		anonym.incrementGrade();
	while (anonym.getGrade() < 150)
		anonym.decrementGrade();

	/* */

	return 0;
}