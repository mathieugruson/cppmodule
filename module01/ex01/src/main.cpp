/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:57:30 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 13:39:23 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Horde = zombieHorde(10, "Mathieu");
	for (int i = 0 ; i < 10 ; i++)
	{
		std::cout << "Pointer value for zombie[" << i << "]: " << std::hex << &Horde[i] << std::endl;
		Horde[i].announce();
	}
	delete [] Horde;
}