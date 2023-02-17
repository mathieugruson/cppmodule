/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:38:50 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 16:16:15 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(/* args */) : Animal("Dog"),
{
	std::cout << "Dog default constructor called" << std::endl;
}


Dog::Dog(const Dog& obj)
{
	*this = obj;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;

}

Dog& Dog::operator=(const Dog& obj)
{
	this->_type = obj._type;
	return (*this)
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf wouf" << std::endl;
}