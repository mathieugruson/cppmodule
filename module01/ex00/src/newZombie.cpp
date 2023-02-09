/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:33:20 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 12:37:18 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	try
	{
		Zombie *ptr = NULL;
		ptr = new Zombie(name);
		return (ptr);
	}
	catch(std::bad_alloc&) 
	{
		std::cout << "Allocation failed" << std::endl;
		return (NULL);
	}
}