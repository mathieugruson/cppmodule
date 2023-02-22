/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:48:30 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/22 17:07:51 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main(void)
{
	Data *Bob = new Data;
	Bob->str = "Bob";
	std::cout << Bob->getStr() << std::endl;
	uintptr_t ser = Serialize::serialize(Bob);
	Data *Patrick = Serialize::deserialize(ser);
	std::cout << Patrick->getStr() << std::endl;
	delete Bob;
}