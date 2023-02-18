/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:00:58 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 17:15:13 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "A_Animal.hpp"

A_Animal::A_Animal(/* args */) 
{
	this->_type = "";
	std::cout << "A_Animal default constructor called" << std::endl;
}

A_Animal::A_Animal(std::string type) : _type(type)
{
	std::cout << "A_Animal overload constructor called" << std::endl;
}

A_Animal::A_Animal(const A_Animal& obj)
{
	*this = obj;
	std::cout << "A_Animal copy constructor called" << std::endl;
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal destructor called" << std::endl;
}

A_Animal& A_Animal::operator=(const A_Animal& obj)
{
	this->_type = obj._type;
	return (*this);
}

std::string	A_Animal::getType(void) const 
{
	return (_type);
}
