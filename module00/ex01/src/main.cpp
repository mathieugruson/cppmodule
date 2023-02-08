/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:26:14 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/08 15:42:35 by mgruson          ###   ########.fr       */
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
		if (!(std::getline(std::cin, prompt)))
			return (0);
		if (prompt == "ADD") 
		{
			Contact contact;
			
			prompt.erase();
			while (prompt.size() < 1)
			{
				std::cout << "Enter first name:";
				if (!(std::getline(std::cin, prompt)))
					return (0);
			}
			contact.add_firstname(prompt);

			prompt.erase();
			while (prompt.size() < 1)
			{
				std::cout << "Enter last name:";
				if (!(std::getline(std::cin, prompt)))
					return (0);
			}
			contact.add_lastname(prompt);
			
			prompt.erase();
			while (prompt.size() < 1)
			{
				std::cout << "Enter nickname:";
				if (!(std::getline(std::cin, prompt)))
					return (0);
			}
			contact.add_nickname(prompt);

			prompt.erase();
			while (prompt.size() < 1)
			{
				std::cout << "Enter phone number:";
				if (!(std::getline(std::cin, prompt)))
					return (0);
			}
			contact.add_phone_number(prompt);
			
			prompt.erase();
			while (prompt.size() < 1)
			{
				std::cout << "Enter darkest secret:";
				if (!(std::getline(std::cin, prompt)))
					return (0);
			}
			contact.add_darkest_secret(prompt);

			phonebook.addContact(contact, i);
			i++;
		}
		else if (prompt == "SEARCH")
		{
			phonebook.displayPhonebook(i);
			prompt.erase();
			while (std::atoi(prompt.c_str()) < 1 || std::atoi(prompt.c_str()) > 8)
			{
				std::cout << "Enter an index between 1 and 8:" << std::endl;
				if (!(std::getline(std::cin, prompt)))
					return (0); 
			}
			phonebook.displayContact(std::atoi(prompt.c_str()));
		}
		else if (prompt != "EXIT")
		{
			std::cout << "Not the wright input" << std::endl;
		}
	}
	return (0);
}
