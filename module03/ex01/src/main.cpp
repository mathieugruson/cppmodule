/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:58:20 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 14:43:23 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("A");
	ScavTrap b("B");
	ScavTrap c("C");
	ScavTrap d;

	std::cout << "\nOPERATOR TEST\n" << std::endl; 
	d = b;
	std::cout << "d name is " << d.getName() << std::endl;

	std::cout << "\nSCAVTRAP CLASS TEST\n" << std::endl; 
	a.announce();
	a.attack("B");
	a.guardGate();
	
	std::cout << "\nINHERITANCE TEST\n" << std::endl; 
	b.takeDamage(90);
	b.beRepaired(20);
	b.takeDamage(40);
	b.beRepaired(20);


	while(c.getEnergyPoints())
	{
		c.attack("A");
	}
	c.attack("A");

	return (0);
}