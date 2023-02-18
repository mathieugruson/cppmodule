/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:58:48 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 16:11:49 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(Brain const &obj)
{
	std::cout << "Brain copy Constructor called" << std::endl;
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &obj)
{
	std::cout << "Brain operator= called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return *this;
}

std::string	Brain::getIdeas(unsigned int i)
{
	if (i < 0 || i >= 100)
		return ("Index not good");
	else
		return (this->_ideas[i]);
	
}

void	Brain::setIdeas(unsigned int i, std::string idea)
{
	if (i < 0 || i >= 100)
		std::cout << "Index not good" << std::endl;
	else
		this->_ideas[i] = idea;
}