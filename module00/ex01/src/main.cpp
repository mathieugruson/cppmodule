/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:26:14 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/06 18:01:07 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() 
{
	int i = 0;
	PhoneBook phonebook;
	std::string firstname, lastname, nickname, phone_number, darkest_secret;
	std::string prompt;

	while(prompt != "EXIT") 
	{
		std::cout << "Enter ADD, SEARCH or EXIT command: ";
		std::cin >> prompt;
		if (prompt == "ADD") 
		{
			Contact contact;
			std::cout << "Enter first name:";
			std::cin >> prompt;
			contact.add_firstname(prompt);
			
			std::cout << "Enter last name:";
			std::cin >> prompt;
			contact.add_lastname(prompt);
			
			std::cout << "Enter nickname:";
			std::cin >> prompt;
			contact.add_nickname(prompt);
			
			std::cout << "Enter phone number:";
			std::cin >> prompt; 
			contact.add_phone_number(prompt);
			
			std::cout << "Enter darkest secret:";
			std::cin >> prompt;
			contact.add_darkest_secret(prompt);
		
			phonebook.addContact(contact, i);
			i++;
		}
		else if (prompt == "SEARCH")
		{
			phonebook.displayPhonebook(i);
			std::cout << "Enter the index of the contact that you want to reach: " << std::endl;
			int index = 0;
			std::cin >> index;
			phonebook.displayContact(index);
		}
		else if (prompt != "EXIT")
		{
			std::cout << "Not the wright input" << std::endl;
		}
	}
}
