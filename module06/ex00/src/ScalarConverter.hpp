/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:59:39 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/21 19:20:59 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>

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
};

#endif