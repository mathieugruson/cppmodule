/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:45:19 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 14:40:12 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &str;

	std::string &stringREF = str;

	std::cout << "L’adresse de la string en mémoire : " << &str << std::endl;
	std::cout << "L’adresse stockée dans stringPTR : " << stringPTR << std::endl;
	std::cout << "L’adresse stockée dans stringREF : " << &stringREF << std::endl;

	std::cout << "La valeur de la string. : " << str << std::endl;
	std::cout << "La valeur pointée par stringPTR : " << *stringPTR << std::endl;
	std::cout << "La valeur pointée par stringREF : " << stringREF << std::endl;	
}