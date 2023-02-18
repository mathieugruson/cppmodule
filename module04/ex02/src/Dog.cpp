/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:38:50 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 17:17:33 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(/* args */) : A_Animal("Dog"), _brain(new Brain)
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : A_Animal(obj), _brain(new Brain)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog& Dog::operator=(const Dog& obj)
{
	std::cout << "Dog operator= called" << std::endl;
	this->_type = obj._type;
	(*this->_brain) = (*obj._brain);
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf wouf" << std::endl;
}

void	Dog::setIdeas(unsigned int i, std::string idea)
{
	this->_brain->setIdeas(i, idea);
}

std::string	Dog::getIdeas(unsigned int i)
{
	return (this->_brain->getIdeas(i));
}