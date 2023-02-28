/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:46:48 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/28 14:46:51 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(const Span& obj) : _size(obj.getSize()), _v(obj.getVector())
{
	if ( DEBUG )
		std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& obj)
{
	if ( DEBUG )
		std::cout << "Span operator= assignement called" << std::endl;
	this->_size = obj.getSize();
	this->_v = obj.getVector();
	return (*this);
}

Span::Span(std::size_t i) : _size(i)
{
	if ( DEBUG )
		std::cout << "Span overload constructor called" << std::endl;
	_v.reserve(i); 
}

Span::~Span(void)
{
	if ( DEBUG )
		std::cout << "Span destructor called" << std::endl;
}


void Span::addNumber(int value)
{
	if (_v.size() == this->_size) 
	{
		throw std::length_error("Span object is full");
	}
	if ( DEBUG )
		std::cout << "_v.size(): " << _v.size() << "_size: " << _size << std::endl;
	_v.push_back(value);
}

void Span::addRange(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	if ( DEBUG )
		std::cout << "this->getSize(): " << this->getSize() << " _v.size(): " << _v.size() \
		<< " std::distance(begin, end): " << static_cast<unsigned long>(std::distance(begin, end)) \
		<< std::endl;
	if (this->getSize() < _v.size() + static_cast<unsigned long>(std::distance(begin, end)))
	{
		throw std::length_error("Span object would be full");
	}
	if ( DEBUG )
		std::cout << "distance _v " << static_cast<unsigned long>(std::distance(this->_v.begin(), this->_v.end())) \
		<< std::endl;
	_v.insert(_v.end(), begin, end);
}

int Span::shortestSpan() const
{
	if (_v.size() < 2)
	{
		throw std::logic_error("Vector need to contain more than one element");
	}
	int ret = INT_MAX;
	int prev;
	std::vector<int> tmp = _v;
	
	std::sort(tmp.begin(), tmp.end());
	for (std::vector<int>::iterator iter = tmp.begin(); iter != tmp.end(); iter++) 
	{
		if (iter == tmp.begin()) 
		{
			prev = *iter;
		}
		else 
		{
			if (ret > *iter - prev) 
			{
				ret = *iter - prev;
			}
			prev = *iter;
		}
	}
	return (ret);
}

int Span::longestSpan() const
{
	if (_v.size() < 2)
	{
		throw std::logic_error("vector need to contain more than one element");
	}
	return (*std::max_element(_v.begin(), _v.end()) - *std::min_element(_v.begin(), _v.end()) );
}

std::size_t Span::getSize() const
{
	return (this->_size);
}

std::vector<int> Span::getVector() const
{
	return (this->_v);
}