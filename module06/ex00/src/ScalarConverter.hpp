/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:59:39 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/22 14:02:32 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

class ScalarConverter
{
	private:
	ScalarConverter();
	ScalarConverter(ScalarConverter const &obj);
	ScalarConverter &operator=(ScalarConverter const &obj);
	/* data */
	public:
	~ScalarConverter();
	static void convert(const std::string& str);
	static bool isChar(std::string str);
	static bool isInt(std::string str);
	static bool isFloat(std::string str);
	static bool isDouble(std::string str);

};

#endif