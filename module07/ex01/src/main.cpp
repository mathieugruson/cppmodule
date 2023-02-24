/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:28:17 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/24 15:49:50 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char c[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string str[4] = {"mathieu", "cyril", "bob", "patrick"};
	
	iter(i, 10, print<int>);
	std::cout << std::endl;
	iter(c, 5, print<char>);
	std::cout << std::endl;
	iter(str, 4, print<std::string>);

	return (0);
}