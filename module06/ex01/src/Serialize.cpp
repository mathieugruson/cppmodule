/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:45:57 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/22 17:02:38 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
	std::cout << "Serialize Default Constructor called" << std::endl;
}
Serialize::Serialize(Serialize const &obj)
{
	*this = obj;
}
Serialize::~Serialize()
{
	std::cout << "Serialize Destructor called" << std::endl;
}
Serialize &Serialize::operator=(Serialize const &obj)
{
	(void)&obj;
	std::cout << "Serialize Copy assignment operator called" << std::endl;
	return *this;
}

uintptr_t Serialize::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw) 
{
	return reinterpret_cast<Data*>(raw); 
}
