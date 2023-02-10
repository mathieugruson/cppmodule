/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:02:18 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 13:29:55 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) :_name(name)
{
	
}

Zombie::Zombie( void )
{
	
}

Zombie::~Zombie( void )
{
	
}

void	Zombie::announce( void ) const
{
	std::cout << "Zombie : " << this->_name  << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
	std::cout << "Name set" << std::endl;
}