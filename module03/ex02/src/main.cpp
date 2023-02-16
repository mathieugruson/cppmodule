/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:58:20 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 14:59:44 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("A");
	FragTrap b("B");
	FragTrap c("C");
	FragTrap d;

	std::cout << "\nOPERATOR TEST\n" << std::endl; 
	d = b;
	std::cout << "d name is " << d.getName() << std::endl;

	std::cout << "\nFRAGTRAP CLASS TEST\n" << std::endl; 
	a.announce();
	a.attack("B");
	a.highFivesGuys();
	
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