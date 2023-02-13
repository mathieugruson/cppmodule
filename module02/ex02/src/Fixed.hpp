/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:53:03 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/13 13:25:04 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
 private:

	int					_rawbits;
	static const int	_bits = 8;
	
 public:

	Fixed(/* args */);
	Fixed(const Fixed& obj);
	~Fixed();
	Fixed(int num);
	Fixed(const float num);

	/* arithmetic operators */
	Fixed&		operator=(const Fixed& obj);
	Fixed		operator+(Fixed const &ref) const;
	Fixed		operator-(Fixed const &ref) const;
	Fixed		operator*(Fixed const &ref) const;
	Fixed		operator/(Fixed const &ref) const;
	
	/* comparison operator */
	bool		operator>(Fixed const &ref) const;
	bool		operator<(Fixed const &ref) const;
	bool		operator>=(Fixed const &ref) const;
	bool		operator<=(Fixed const &ref) const;
	bool		operator==(Fixed const &ref) const;
	bool		operator!=(Fixed const &ref) const;

	/* increment and decrement operators */
	Fixed		&operator++(void);
	const Fixed	operator++(int);
	Fixed&		operator--(void);
	const Fixed	operator--(int);
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);

#endif