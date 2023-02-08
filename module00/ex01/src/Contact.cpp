/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:30:15 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/08 14:01:20 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::string firstname = "";
	std::string lastname = "";
	std::string nickname = "";
	std::string phone_number = "";
	std::string darkest_secret = "";
}

void Contact::add_firstname(std::string str)
{
	firstname = str;
}

void Contact::add_lastname(std::string str)
{
	lastname = str;
}

void Contact::add_nickname(std::string str)
{
	nickname = str;
}

void Contact::add_phone_number(std::string str)
{
	phone_number = str;
}

void Contact::add_darkest_secret(std::string str)
{
	darkest_secret = str;
}

std::string Contact::get_firstname()
{
	std::string fn;
	fn = firstname;
	return (fn);
}

std::string Contact::get_lastname()
{
	std::string fn;
	fn = lastname;
	return (fn);
}

std::string Contact::get_nickname()
{
	std::string fn;
	fn = nickname;
	return (fn);
}

std::string Contact::get_phone_number()
{
	std::string fn;
	fn = phone_number;
	return (fn);
}

std::string Contact::get_darkest_secret()
{
	std::string fn;
	fn = darkest_secret;
	return (fn);
}
