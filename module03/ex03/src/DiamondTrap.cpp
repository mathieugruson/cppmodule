/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:10:00 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 17:51:25 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): _name(ClapTrap::_name)
{
	ClapTrap::_name = ClapTrap::_name + "_clap_name";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	_hit_points = FragTrap::_hit_points;
	_energy_points = ScavTrap::_energy_points;
	_attack_damage = FragTrap::_attack_damage;
	
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj) : FragTrap(obj), ScavTrap(obj)
{
	std::cout << "DiamondTrap " << this->_name << " copy constructor called" << std::endl;
	std::cout << "thisname " << this->_name << " obj._name " << obj._name << std::endl;
	this->_name = obj._name;
	ClapTrap::_name = this->_name + "_clap_name";
	
}

DiamondTrap::~DiamondTrap(void) 
{
	std::cout << "DiamondTrap " << this->_name << " destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) 
{
	this->_name = obj._name;
	this->_attack_damage = obj._attack_damage;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	ClapTrap::_name = this->_name + "_clap_name";
	std::cout << "DiamondTrap operator = " << this->_name << " called" << std::endl;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout	<< "This DiamondTrap name is " << this->_name 
				<< " and This ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::displayInfos(void)
{
	std::cout << "ClapTrap name " << ClapTrap::_name << std::endl;
	std::cout << "name " << this->_name << std::endl;
	std::cout << "_hit_points " << this->_hit_points << std::endl;
	std::cout << "_energy_points " << this->_energy_points << std::endl;
	std::cout << "_attack_damage " << this->_attack_damage << std::endl;
}
