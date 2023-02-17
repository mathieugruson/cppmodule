/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:37:33 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 19:01:17 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
	*this = obj;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat operator= called" << std::endl;
	this->_type = obj._type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaou miaou" << std::endl;
}