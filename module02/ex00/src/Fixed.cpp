/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:55:03 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/15 13:45:16 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) 
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawbits = 0;
}

Fixed::Fixed(const Fixed& obj) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed(void) 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj) 
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawbits = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawbits);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawbits = raw;
}