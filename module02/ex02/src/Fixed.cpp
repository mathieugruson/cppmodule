/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:08:27 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/15 14:14:37 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

	/* CONSTRUCTOR AND DESTRUCTOR */
	
Fixed::Fixed(void) 
{
	this->_rawbits = 0;
}

Fixed::Fixed(const Fixed &obj) 
{
	this->_rawbits = obj.getRawBits();
}

Fixed::Fixed(int num)
{
	this->_rawbits = num << this->_bits;
}



Fixed::Fixed(const float num)
{
	this->_rawbits = roundf(num * (1 << this->_bits));

}

Fixed& Fixed::operator=(const Fixed &obj) 
{
	this->_rawbits = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) 
{
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawbits / (1 << this->_bits)); 
}

int	Fixed::toInt(void) const
{
	return (this->_rawbits >> this->_bits);
}

	/* ARITHMETIC OPERATORS */
	

Fixed	Fixed::operator+(Fixed const &obj) const
{
	Fixed ret(this->toFloat() + obj.toFloat());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const &obj) const
{
	Fixed ret(this->toFloat() - obj.toFloat());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const &obj) const
{
	Fixed ret(this->toFloat() * obj.toFloat());
	return (ret);
}

Fixed	Fixed::operator/(Fixed const &obj) const
{
	Fixed ret(this->toFloat() / obj.toFloat());
	return (ret);
}

	/* COMPARISON OPERATOR */

bool	Fixed::operator>(Fixed const &obj) const
{
	return (this->getRawBits() > obj.getRawBits());
}

bool	Fixed::operator<(Fixed const &obj) const
{
	return (this->getRawBits() < obj.getRawBits());
}

bool	Fixed::operator>=(Fixed const &obj) const
{
	return (this->getRawBits() >= obj.getRawBits());
}

bool	Fixed::operator<=(Fixed const &obj) const
{
	return (this->getRawBits() <= obj.getRawBits());
}

bool	Fixed::operator==(Fixed const &obj) const
{
	return (this->getRawBits() == obj.getRawBits());
}

bool	Fixed::operator!=(Fixed const &obj) const
{
	return (this->getRawBits() != obj.getRawBits());
}

	/* INCREMENT AND DECREMENT OPERATORS */

/*
	The difference between ++() and ()++ is that :
	for i++ : it returns a const, that can't be modified after so that (i++)++ won't compile
	for ++i : it worls because it return a ref that can be modify (++i)++ will compile
*/

Fixed&	Fixed::operator++(void)
{
	this->_rawbits++;
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	const Fixed	ret(*this);

	this->_rawbits++;
	return (ret);
}

Fixed&	Fixed::operator--(void)
{
	this->_rawbits--;
	return (*this);
}

const Fixed	Fixed::operator--(int)
{
	const Fixed	ret(*this);

	this->_rawbits--;
	return (ret);
}

	/* RETURN MIN AND MAX */

Fixed&	Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1 <= ref2)
		return ref1;
	else
		return ref2;
}

const Fixed&	Fixed::min(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 <= ref2)
		return ref1;
	else
		return ref2;
}

Fixed&	Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	else
		return ref2;
}

const Fixed&	Fixed::max(Fixed const &ref1, Fixed const &ref2)
{
	if (ref1 >= ref2)
		return ref1;
	else
		return ref2;
}

	/* GETTER and SETTER */

int	Fixed::getRawBits(void) const
{
	return (this->_rawbits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
}

	/* output operator*/

std::ostream& operator <<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}