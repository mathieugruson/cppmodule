/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:19:54 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/08 18:27:09 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void ) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( void )
{
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Constructor with surcharge called" << std::endl;
	_name = name;
}

Zombie::~Zombie( void )
{
	std::cout << "Destructor called" << std::endl;
}