/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 19:18:22 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/15 14:18:53 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a(10);
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(20.50f);
	Fixed d(20.50f);

	std::cout << "\narithmetic operators\n" << std::endl;

	std::cout << "a = b so that A = " << a << std::endl;
	std::cout << "10 + 10 = " << a + a << std::endl;
	std::cout << "10 - 10 = " << a - a << std::endl;
	std::cout << "10 * 10 = " << a * a << std::endl;
	std::cout << "10 / 10 = " << a / a << std::endl;
	
	std::cout << "\ncomparison operator\n" << std::endl;
	
	std::cout << "(a < b) : " << (a < b) << std::endl;
	std::cout << "(c <= d) : " << (c <= d) << std::endl;
	std::cout << "(a >= b) : " << (a >= b) << std::endl;
	std::cout << "(a > b) : " << (a > b) << std::endl;
	std::cout << "(c == d) : " << (c == d) << std::endl;
	std::cout << "(a != b) : " << (a != b) << std::endl;
	
	std::cout << "\nincrement and decrement operators\n" << std::endl;

	Fixed e(50);
	std::cout << "e : " << e << std::endl;
	std::cout << "e-- : " << e-- << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "e++ : " << e++ << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "--e : " << --e << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "++e : " << ++e << std::endl;
	std::cout << "e : " << e << std::endl;
	
	std::cout << "(--e)++ : " << (--e)++ << std::endl;
	/* 	std::cout << (e++)++ << std::endl;*/
	
	std::cout << "\nreturn min and max\n" << std::endl;
	
	std::cout << "Fixed::max( c, d ) : " << Fixed::max( c, d ) << std::endl;
	std::cout << "Fixed::min( a, d ) : " << Fixed::min( a, d ) << std::endl;
	std::cout << "Fixed::max( b, e ) : "<< Fixed::max( b, e ) << std::endl;
	std::cout << "Fixed::min( a, b ) : " << Fixed::min( a, b ) << std::endl;
	
	return 0;
}


	/* SUBJECT MAIN */

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;

// 	std::cout << "a" << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << "a" << std::endl;
// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;
	
// 	return 0;
// }