/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:03:26 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 15:02:14 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj) 
{
	this->_name = obj._name;
	this->_attack_damage = obj._attack_damage;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	std::cout << "ScavTrap " << _name << " copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) 
{
	this->_name = obj._name;
	this->_attack_damage = obj._attack_damage;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	std::cout << "ScavTrap operator = " << this->_name << " called" << std::endl;
	return (*this);

}

ScavTrap::~ScavTrap(void) 
{
	std::cout << "ScavTrap " << this->_name << " destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " has entered gate guard mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (target.size() == 0 || this->_name.size() == 0)
	{
		std::cout << "A target or a player can't be NULL" << std::endl;
		return ;
	}
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << this->_name << " can't attack" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target ;
		std:: cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

void	ScavTrap::announce() const
{
	std::cout << "Name is " << this->_name << std::endl;
	std::cout << "Hit points are " << this->_hit_points << std::endl;
	std::cout << "Energy points are " << this->_energy_points << std::endl;
	std::cout << "Attack damage are " << this->_attack_damage << std::endl;

}
