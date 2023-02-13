/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:53:03 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/13 12:40:47 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {
 private:
	int	_rawbits;
	static const int	_bits = 8;
 public:
	Fixed(/* args */); // constructeur par defaut
	Fixed(const Fixed& obj); // constructeur de copie
	~Fixed(); // destructeur
	Fixed& operator=(const Fixed& obj);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif