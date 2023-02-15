/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:35:51 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/15 17:20:28 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
#include <string>

class ClapTrap {
 private:
	
	std::string _name;
	unsigned int _hit_points;
	unsigned int _energy_points;
	unsigned int _attack_damage;
	
 public:
	ClapTrap(/* args */);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& obj);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif