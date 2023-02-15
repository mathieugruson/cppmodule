/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:55:03 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/15 14:14:04 by mgruson          ###   ########.fr       */
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
	this->_rawbits = obj.getRawBits();
}

/* In this function, the int sent get a bitwize operation. 
As it is a integer, it will be a X.0, so that it is just necessary to
shift on the left by 8 so that an int is 8 bits */

Fixed::Fixed(int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawbits = num << this->_bits;
	std::cout << this->_rawbits << std::endl;
}

/*
Here we use also (1 << this->_bits) instead of num << this->_bits, because
we can't do this on float but it is the same.
By multiplying it, we shift it so that the integer part of the _rawbits is shift 
by 8 as the 8 first are going to be reserved for the decimal part
then, rouding the number is going to allow us to with just the right two
decimal round after!
*/

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawbits = roundf(num * (1 << this->_bits));
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

/* before we multiplied by (1 << this->bits), now we divide to have
the inverse result as we go from fiexed to float */

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawbits / (1 << this->_bits)); 
}

/* here, we also do the inverse by shiting to the write so that nothing is left 
for decimal part of the number */

int	Fixed::toInt(void) const
{
	return (this->_rawbits >> this->_bits);
}

std::ostream& operator <<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}