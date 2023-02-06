/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:30:06 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/06 17:59:53 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact 
{
	public :
	
	Contact();
	void add_firstname(std::string str);
	void add_lastname(std::string str);
	void add_nickname(std::string str);
	void add_phone_number(std::string str);
	void add_darkest_secret(std::string str);
	std::string get_firstname();
	std::string get_lastname();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
	
	private:
	
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif