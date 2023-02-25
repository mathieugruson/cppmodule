/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:23:54 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/25 15:35:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _array(NULL), _len(0)
{
	std::cout << "Array Default constructor called." << std::endl;
}

template< typename T>
Array<T>::Array(unsigned int n) : _array( new T[n] ), _len( n )
{
	std::cout << "Array Overload constructor called." << std::endl;
	for (unsigned int i = 0; i < _len; i++)
	{
		_array[i] = 0;
	}
}

template<>
Array<std::string>::Array(unsigned int n) : _array( new std::string[n] ), _len( n )
{
	std::cout << "Array Overload constructor called." << std::endl;
	for (unsigned int i = 0; i < _len; i++)
	{
		_array[i] = "";
	}
}

template< typename T>
Array<T>::Array(const Array<T>& obj) : _array( NULL ), _len( 0 )
{
	std::cout << "Array Copy constructor called." << std::endl;
	*this = obj;
}

template< typename T>
Array<T>::~Array()
{
	std::cout << "Array Default destructor called." << std::endl;
	delete [] _array;
	this->_array = NULL;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	std::cout << "Array operator= called" << std::endl;
	delete [] this->_array;
	this->_array = NULL;
	this->_len = obj._len;
	this->_array = new T[this->_len];
	for(unsigned int i = 0; i < this->_len; i++)
	{
		_array[i] = obj[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[] (unsigned int i) const
{
	std::cout << "Array operator[] called" << std::endl;
	if (i >= this->_len || i < 0)
	{
		throw std::out_of_range("Index out of range");
	}
	return (this->_array[i]);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_len);
}