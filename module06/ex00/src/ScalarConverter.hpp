/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:59:39 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/22 17:31:09 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <cctype>
#include <limits.h>

class ScalarConverter
{
	private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &obj);
	ScalarConverter &operator=(ScalarConverter const &obj);
	~ScalarConverter();
	/* data */
	public:
	static void convert(const std::string& str);
	static bool isChar(std::string str);
	static bool isInt(std::string str);
	static bool isFloat(std::string str);
	static bool isDouble(std::string str);
	static void displayChar(char _char);
	static void displayInt(int _int);
	static void displayFloat(float _float, std::string str);
	static void displayDouble(double _double, std::string str);
};

#endif