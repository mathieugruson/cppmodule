/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:30:31 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/07 15:24:05 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	Contact contact[8];
}

void PhoneBook::addContact(Contact &c, int i) {
	std::cout << i << std::endl;
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
	if (i >= 8)
		contact[7] = c;
}

void PhoneBook::displayContact(int i)
{
	std::cout << "First name: " << contact[i - 1].get_firstname() << std::endl;
	std::cout << "Last name: "<< contact[i - 1].get_lastname() << std::endl;
	std::cout << "Nick name: "<< contact[i - 1].get_nickname() << std::endl;
	std::cout << "Phone number: "<< contact[i - 1].get_phone_number() << std::endl;
	std::cout << "Darkest secret: "<< contact[i - 1].get_darkest_secret() << std::endl;
}

void PhoneBook::displayPhonebook(int contact_num)
{
	if (contact_num == 0)
	{
		std::string str = "Empty phone book at the moment";
			std::cout << std::right << std::setw(str.size() + 10) << str << std::endl;
		return ;
	}
	if (contact_num > 8)
		contact_num = 8;
	for (int i = 0; i < contact_num ; i++)
	{	
		std::cout << std::right << std::setw(10) << (i + 1) << "|";
		if (contact[i].get_firstname().size() > 10)
			std::cout << std::right << std::setw(10) << contact[i].get_firstname().substr(0, 9) << "." << "|";
		else
			std::cout << std::right << std::setw(11) << contact[i].get_firstname().substr(0, 10) << "|";
		/* */
		if (contact[i].get_lastname().size() > 10)
			std::cout << std::right << std::setw(10) << contact[i].get_lastname().substr(0, 9) << "." << "|";
		else
			std::cout << std::right << std::setw(11) << contact[i].get_lastname().substr(0, 10) << "|";
		/**/
		if (contact[i].get_nickname().size() > 10)
			std::cout << std::right << std::setw(10) << contact[i].get_nickname().substr(0, 9) << "." << std::endl;
		else
			std::cout << std::right << std::setw(11) << contact[i].get_nickname().substr(0, 10) << std::endl;
	}
}
