/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:06:47 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/22 13:54:06 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "Wrong number of args" << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}