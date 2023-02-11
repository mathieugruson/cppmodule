/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:55:03 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/11 17:06:37 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CPP
# define FIXED_CPP

# include <iostream>


class Fixed {
 private:
	/* data */
 public:
	Fixed(/* args */);
	Fixed(const Fixed& obj);
	~Fixed();
	Fixed& operator=(const Fixed& obj);
};

#endif

Fixed::Fixed(/* args */) {}
Fixed::Fixed(const Fixed& obj) {}
Fixed::~Fixed() {}
Fixed& Fixed::operator=(const Fixed& obj) {}

a.getValue() == b.getValue()
a = b