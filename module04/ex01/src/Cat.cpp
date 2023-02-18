/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:37:33 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 17:12:10 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(/* args */) : Animal("Cat"), _brain(new Brain)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj), _brain(new Brain)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat operator= called" << std::endl;
	this->_type = obj._type;
	(*this->_brain) = (*obj._brain);
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Wouf wouf" << std::endl;
}

void	Cat::setIdeas(unsigned int i, std::string idea)
{
	this->_brain->setIdeas(i, idea);
}

std::string	Cat::getIdeas(unsigned int i)
{
	return (this->_brain->getIdeas(i));
}