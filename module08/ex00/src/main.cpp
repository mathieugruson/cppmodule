/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:10:17 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/25 18:32:57 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main( void )
{
	std::vector<int> v;
	std::list<int> l;

	for (int i = 0; i < 10; i++)
	{
		std::cout << " value: " << i << std::endl;
		v.push_back(i);
		l.push_back(i);
	}
	
	std::vector<int>::iterator ite_v;
	std::list<int>::iterator ite_l;

	ite_v = easyfind< std::vector<int> >(v, 9);
	if (ite_v != v.end())
		std::cout << "OK" << std::endl;
	else
		std::cout << "Error : Value not found" << std::endl;

	ite_v = easyfind< std::vector<int> >(v, 10);
	if (ite_v != v.end())
		std::cout << "OK" << std::endl;
	else
		std::cout << "Error : Value not found" << std::endl;
		
	ite_l = easyfind< std::list<int> >(l, 4);
	if (ite_l != l.end())
		std::cout << "OK" << std::endl;
	else
		std::cout << "Error : Value not found" << std::endl;
}