/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:40:09 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 15:53:40 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Default_name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap default constructer called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10) ,_attack_damage(10)
{
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	std::cout << "Copy constructer called of " << this->_name << std::endl;
	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << this->_name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	this->_name = obj._name;
	this->_hit_points = obj._hit_points;
	this->_energy_points = obj._energy_points;
	this->_attack_damage = obj._attack_damage;
	std::cout << "ClapTrap operator = of " << this->_name << " called" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap::attack :" << std::endl;

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
		std::cout << "ClapTrap " << this->_name << " attacks " << target ;
		std:: cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_name.size() == 0)
	{
		std::cout << "A target or a player can't be NULL" << std::endl;
		return ;
	}
	if (amount > this->_hit_points)
	{
		this->_hit_points = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " took damage and lost " \
		<< amount << " points of damage!" << std::endl;
		this->_hit_points -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_name.size() == 0)
	{
		std::cout << "A target or a player can't be NULL" << std::endl;
		return ;
	}
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
	{
		std::cout << this->_name << " can not be repaired" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repaired by getting " \
		<< amount << " point of life" << std::endl;
		this->_hit_points += amount;
		this->_energy_points--;
	}
}

std::string	ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int	ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::getHitPoints() const
{
	return (this->_hit_points);
}