/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:00:39 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/24 17:39:07 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template<typename T, int N>
class Array
{
	private:
	T _array[N];
	/* data */

	public:
	Array();
	Array(Array const &obj);
	~Array();
	Array &operator=(Array const &obj);
};

#endif

#include "Array.hpp"

Array::Array()
{
	T array[0];
	std::cout << "Array Default Constructor called" << std::endl;
}

Array::Array(unsigned int N) : _array()
{
	std::cout << "Array Overload Constructor called" << std::endl;
}

Array::Array(Array const &obj)
{
	*this = obj;
}
Array::~Array()
{
	std::cout << "Array Destructor called" << std::endl;
}
Array &Array::operator=(Array const &obj)
{
	std::cout << "Array Copy assignment operator called" << std::endl;
	return *this;
}
