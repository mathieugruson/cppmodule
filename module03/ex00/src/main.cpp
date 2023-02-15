/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:58:20 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/15 18:00:56 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");
	ClapTrap c("");
	
	a.attack("B");
	b.takeDamage(5);
	b.beRepaired(3);
	b.attack("A");
	a.takeDamage(10);
	a.beRepaired(10);
	c.attack("B");
	return (0);
}