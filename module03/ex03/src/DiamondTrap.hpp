/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:10:33 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 17:09:10 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
 private:
	std::string _name;

 public:
	DiamondTrap(void);
	DiamondTrap(const DiamondTrap& obj);
	DiamondTrap& operator=(const DiamondTrap& obj);
	~DiamondTrap(void);
	DiamondTrap(std::string name);
	void whoAmI(void);
	using ScavTrap::attack;
	
	void displayInfos(void);
};

#endif