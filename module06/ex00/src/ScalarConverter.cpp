/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:59:36 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 19:16:36 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const &obj)
{
	std::cout << "ScalarConverter Default Constructor called" << std::endl;
	*this = obj;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obj)
{
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	return *this;
}

static void convert(const std::string& str)
{
	try {
		// Try to convert to char
		char c = convertToChar(str);
		std::cout << "char: " << c << std::endl;
	}
	catch (const std::invalid_argument& e) {
		std::cout << "char: " << e.what() << std::endl;
	}
	
	try {
		// Try to convert to int
		int i = std::stoi(str);
		std::cout << "int: " << i << std::endl;
	}
	catch (const std::invalid_argument& e) {
		std::cout << "int: " << e.what() << std::endl;
	}
	
	try {
		// Try to convert to float
		float f = std::stof(str);
		std::cout << "float: " << str << "f" << std::endl;
	}
	catch (const std::invalid_argument& e) {
		std::cout << "float: " << e.what() << std::endl;
	}
	
	try {
		// Try to convert to double
		double d = std::stod(str);
		std::cout << "double: " << d << std::endl;
	}
	catch (const std::invalid_argument& e) {
		std::cout << "double: " << e.what() << std::endl;
	}
}


  static char convertToChar(const std::string& str) {
    if (str.length() != 1) {
      throw std::invalid_argument("impossible");
    }
    
    char c = str[0];
    
    // Check for non-displayable characters
    if (c < 32 || c > 126) {
      throw std::invalid_argument("Non displayable");
    }
    
    return c;
  }