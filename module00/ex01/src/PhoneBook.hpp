/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:30:36 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/08 18:21:20 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook 
{
	public:
	 
	PhoneBook();
	void addContact(Contact &c, int i);
	void displayContact(int i) ;
	void displayPhonebook(int contact_num) ;

	private :
	
	Contact contact[8];
};

#endif