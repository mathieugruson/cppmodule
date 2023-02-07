/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:00:45 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/01 13:00:15 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int j = 1; argv[j]; j++)
		{
			std::string str(argv[j]);
			for (unsigned long i = 0; i < str.length(); i++)
				str[i] = toupper(str[i]);
			std::cout << str;
		}
		std::cout << std::endl;
		
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}