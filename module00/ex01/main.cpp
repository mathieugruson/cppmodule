/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:26:14 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/06 17:25:47 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

class Contact 
{
	private:
	
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

	public :
	
	void add_firstname(std::string str)
	{
		firstname = str;
	}

	void add_lastname(std::string str)
	{
		lastname = str;
	}

	void add_nickname(std::string str)
	{
		nickname = str;
	}

	void add_phone_number(std::string str)
	{
		phone_number = str;
	}

	void add_darkest_secret(std::string str)
	{
		darkest_secret = str;
	}

	std::string get_firstname()
	{
		std::string fn;
		fn = firstname;
		return (fn);
	}

	std::string get_lastname()
	{
		std::string fn;
		fn = lastname;
		return (fn);
	}

	std::string get_nickname()
	{
		std::string fn;
		fn = nickname;
		return (fn);
	}

	std::string get_phone_number()
	{
		std::string fn;
		fn = phone_number;
		return (fn);
	}

	std::string get_darkest_secret()
	{
		std::string fn;
		fn = darkest_secret;
		return (fn);
	}

};


class PhoneBook 
{
	private :
	
	Contact contact[8];

	public:
	
	void addContact(Contact &c, int i) {
		if (i == 0)
			contact[i] = c;
		if (i == 1)
			contact[i] = c;
		if (i == 2)
			contact[i] = c;
		if (i == 3)
			contact[i] = c;
		if (i == 4)
			contact[i] = c;
		if (i == 5)
			contact[i] = c;
		if (i == 6)
			contact[i] = c;
		if (i == 7)
			contact[i] = c;
		if (i > 8)
			contact[7] = c;
	}

	void displayContact(int i)
	{
		if (i >= 1 && i <= 8)
		{
			std::cout << "First name: " << contact[i - 1].get_firstname() << std::endl;
			std::cout << "Last name: "<< contact[i - 1].get_lastname() << std::endl;
			std::cout << "Nick name: "<< contact[i - 1].get_nickname() << std::endl;
			std::cout << "Phone number: "<< contact[i - 1].get_phone_number() << std::endl;
			std::cout << "Darkest secret: "<< contact[i - 1].get_darkest_secret() << std::endl;
		}
		else
			std::cout << "Your phone book start at page one and has only 8 pages" << std::endl;
	}
	
	void displayPhonebook(int contact_num)
	{
		if (contact_num == 0)
		{
			std::string str = "Empty phone book at the moment";
				std::cout << std::right << std::setw(str.size() + 10) << str << std::endl;
			return ;
		}
		for (int i = 0; i < contact_num || (i < 8 && contact_num > 8); i++)
		{	
			std::cout << std::right << std::setw(10) << (i + 1) << "|";
			if (contact[i].get_firstname().size() > 10)
				std::cout << std::right << std::setw(10) << contact[i].get_firstname().substr(0, 9) << "." << "|";
			else
				std::cout << std::right << std::setw(10) << contact[i].get_firstname().substr(0, 10) << " |";
			/* */
			if (contact[i].get_lastname().size() > 10)
				std::cout << std::right << std::setw(10) << contact[i].get_lastname().substr(0, 9) << "." << "|";
			else
				std::cout << std::right << std::setw(10) << contact[i].get_lastname().substr(0, 10) << " |";
			/**/
			if (contact[i].get_nickname().size() > 10)
				std::cout << std::right << std::setw(10) << contact[i].get_nickname().substr(0, 9) << "." << std::endl;
			else
				std::cout << std::right << std::setw(10) << contact[i].get_nickname().substr(0, 10) << std::endl;
		}
	}
};

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
		else
		{
			std::cout << "Not the wright input" << std::endl;
		}
		
	}
}
