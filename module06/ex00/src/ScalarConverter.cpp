/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 18:59:36 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/22 14:35:34 by mgruson          ###   ########.fr       */
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
	(void)obj;
	std::cout << "ScalarConverter Copy assignment operator called" << std::endl;
	return *this;
}

void ScalarConverter::convert(const std::string& str)
{
	bool (*func[4])(std::string str) = {ScalarConverter::isChar, ScalarConverter::isInt, ScalarConverter::isFloat, ScalarConverter::isDouble};
	unsigned long	i = 0;
	while(func[i] && func[i](str) == false)
		i++;
		
	char	_char = 0;
	int		_int = 0;
	float	_float = 0;
	double	_double = 0;
	
	switch (i)
	{
		case 0 :
			_char = str[0];
			displayChar(_char);
			break;
		case 1 :
			_int = atoi(str.c_str());
			std::cout << _int << std::endl;
			displayInt(_int);
			break;
		case 2 :
			_float = std::atof(str.c_str());
			displayFloat(_float);
			break;
		case 3 :
			_double = std::strtod(str.c_str(), NULL);
			displayDouble(_double);
			break;
		default :
			std::cout << "impossible" << std::endl;
	}
}

void	ScalarConverter::displayChar(char _char)
{
	if (std::isgraph(_char))
		std::cout << "char: " << _char << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;

	int	_int = static_cast<int>(_char);
	std::cout << "int: " << _int << std::endl;

	float	_float = static_cast<float>(_char);
	std::cout << "float: " << _float << std::endl;
	
	double	_double = static_cast<double>(_char);
	std::cout << "double: " << _double << std::endl;
}

void	ScalarConverter::displayInt(int _int)
{
	char _char = static_cast<char>(_int);
	if (std::isgraph(_char) && _int < 256)
		std::cout << "char: " << _char << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	
	std::cout << "int: " << _int << std::endl;

	float	_float = static_cast<float>(_int);
	std::cout << "float: " << _float << std::endl;
	
	double	_double = static_cast<double>(_int);
	std::cout << "double: " << _double << std::endl;
}

void	ScalarConverter::displayFloat(float _float)
{
	(void)_float;

}

void	ScalarConverter::displayDouble(double _double)
{
	(void)_double;

}

bool ScalarConverter::isInt(std::string str)
{
	unsigned long	i = 0;

	if (str[0] == '-' || str[0] == '+')
		i++;
	while (std::isdigit(str[i]))
		i++;
	if (str.size() == i)
		return (true);
	return (false);
}

bool ScalarConverter::isChar(std::string str)
{
	if (str.size() == 1 && !std::isdigit(str[0]))
		return (true);
	return (false);

}

bool ScalarConverter::isFloat(std::string str)
{
	unsigned long	i = 0;
	
	if (str == "-inff" or str == "+inff" or str == "nanf")
		return (true);

	if (str[0] == '-' || str[0] == '+')
		i++;
	while (std::isdigit(str[i]))
		i++;
	if (str[i] == '.' && std::isdigit(str[i + 1]))
		i++;
	else
		return (false);
	while (std::isdigit(str[i]))
		i++;
	if (str[i] == 'f')
		i++;
	if (str.size() == i)
		return (true);
	return (false);
}

bool ScalarConverter::isDouble(std::string str)
{
	unsigned long	i = 0;
	
	if (str == "-inf" || str == "+inf" || str == "nan")
		return (true);
	if (str[0] == '-' || str[0] == '-')
		i++;
	while (std::isdigit(str[i]))
		i++;
	if (str[i] == '.' && std::isdigit(str[i + 1]))
		i++;
	while (std::isdigit(str[i]))
		i++;
	if (str.size() == i)
		return (true);
	return (false);
}
