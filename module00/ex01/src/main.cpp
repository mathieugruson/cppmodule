/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:26:14 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/07 17:16:38 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>
#include <csignal>

int main(int argc, char **argv) 
{
	(void)argv;
	if (argc > 1)
	{
		std::cout << "The program does not need an input" << std::endl;
		return (0);
	}
	int i = 0;
	PhoneBook phonebook;
	std::string prompt;
	while(prompt != "EXIT") 
	{
		std::cout << "Enter ADD, SEARCH or EXIT command: ";
		if (!(std::cin >> prompt))
			break ;
		if (prompt == "ADD") 
		{
			Contact contact;
			std::cout << "Enter first name:";
			if (!(std::cin >> prompt))
				break ;
			contact.add_firstname(prompt);
			
			std::cout << "Enter last name:";
			if (!(std::cin >> prompt))
				break ;
			contact.add_lastname(prompt);
			
			std::cout << "Enter nickname:";
			if (!(std::cin >> prompt))
				break ;
			contact.add_nickname(prompt);
			
			std::cout << "Enter phone number:";
			if (!(std::cin >> prompt))
				break ;
			contact.add_phone_number(prompt);
			
			std::cout << "Enter darkest secret:";
			if (!(std::cin >> prompt))
				break ;
			contact.add_darkest_secret(prompt);

			phonebook.addContact(contact, i);
			i++;
		}
		else if (prompt == "SEARCH")
		{
			phonebook.displayPhonebook(i);
			while (std::atoi(prompt.c_str()) < 1 || std::atoi(prompt.c_str()) > 8) 
			{
				std::cout << "Enter an index between 1 and 8:" << std::endl;
				if (!(std::cin >> prompt))
					break ; 
			}
			phonebook.displayContact(std::atoi(prompt.c_str()));
		}
		else if (prompt != "EXIT")
		{
			std::cout << "Not the wright input" << std::endl;
		}
	}
}
