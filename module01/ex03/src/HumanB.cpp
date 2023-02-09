/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:59:57 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 17:11:37 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name) : _human_name(name)
{
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	this->_weapon_name = &newWeapon;
}

void	HumanB::attack()
{
	std::cout << this->_human_name << "  attacks with their " << this->_weapon_name->getType() << std::endl;
}