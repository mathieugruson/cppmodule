/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:58:20 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 17:52:46 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "\nSTART\n" << std::endl;

	DiamondTrap b("B");
	
	std::cout << "\nB0\n" << std::endl;
	b.whoAmI();
	std::cout << "\nB1\n" << std::endl;
	b.displayInfos();
	
	/**/
	std::cout << "\nA0\n" << std::endl;
	DiamondTrap a;
	std::cout << "\nA1\n" << std::endl;
	a = b;
	std::cout << "\nA2\n" << std::endl;
	a.whoAmI();
	

	std::cout << "\nC0\n" << std::endl;
	DiamondTrap c(a);
	std::cout << "\nC1\n" << std::endl;
	c.whoAmI();

	std::cout << "\nD0\n" << std::endl;
	DiamondTrap d("D");
	std::cout << "\nD1\n" << std::endl;
	d.attack("B");
	std::cout << "\nD2\n" << std::endl;
	d.highFivesGuys();
	std::cout << "\nD3\n" << std::endl;
	d.takeDamage(200);
	std::cout << "\nD4\n" << std::endl;
	d.attack("B");
	std::cout << "\nD5\n" << std::endl;


	std::cout << "\nEND\n" << std::endl;
	return (0);
}
