/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:55:14 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/10 19:03:45 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
private:

	int _n;
	
public:
	Harl( void );
	Harl(int i);
	Harl( Harl const & src);
	~Harl();
	Harl	&operator=(Harl const	&rhs);
	Harl	operator+(Harl const	&rhs) const;
	int		getValue( void ) const;
};

std::ostream	&operator<<( std::ostream	&o, Harl const &rhs)
{
	std::cout << "operator<<" << std::endl;
	o << rhs.getValue();
	return o;
}

Harl::Harl(/* args */)
{
}


Harl::Harl(int i) : _n(i)
{
}

Harl::Harl( Harl const & src)
{
	std::cout << "Copy constructor" << std::endl;
	*this = src;
}

Harl::~Harl()
{
}

int Harl::getValue( void ) const
{
	return this->_n;
}

Harl	&Harl::operator=( Harl const & rhs)
{
	std::cout << "operator=" << std::endl;
	this->_n = rhs.getValue();
	
	return *this;
}

Harl	Harl::operator+( Harl const & rhs ) const
{
	std::cout << "operator+" << std::endl;
	return Harl(this->_n + rhs.getValue());

}

int	main(int argc, char **argv)
{
	Harl test(10);
	Harl test2(50);
	Harl test3( test2 );
	Harl test4;
	
	std::cout << test.getValue() << std::endl;
	test = test2;
	std::cout << test.getValue() << std::endl;
	test4 = test3 + test3;
	std::cout << test3.getValue() << std::endl;
	std::cout << "next" << std::endl;
	std::cout << test4 << std::endl;
}