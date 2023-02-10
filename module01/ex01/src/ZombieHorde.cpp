/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:00:30 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 13:38:43 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << name << " is invalid" << std::endl;
		return (NULL);
	}
	try
	{
		Zombie *zombie = new Zombie[N];
		for (int i = 0; i < N; i++)
			zombie[i].setName(name);
		std::cout << "Pointer value for zombie pointer returned : " << std::hex << zombie << std::endl;
		return (zombie);
	}
	catch(std::bad_alloc&) 
	{
		std::cout << "Allocation failed" << std::endl;
		return (NULL);
	}
}