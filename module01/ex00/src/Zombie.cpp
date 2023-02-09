/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:19:54 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 12:50:21 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void )
{
	std::cout << "Constructor called without overcharge " << this->_name << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor with overcharge called " << this->_name << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "Destructor called " << this->_name << std::endl;
}