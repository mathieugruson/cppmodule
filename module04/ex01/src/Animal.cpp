/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:00:58 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 18:35:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal(/* args */) 
{
	this->_type = "";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal overload constructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
	*this = obj;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
	this->_type = obj._type;
	return (*this);
}

void	Animal::makeSound(void) const
{
}

std::string	Animal::getType(void) const 
{
	return (_type);
}
