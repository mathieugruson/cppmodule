/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:57:11 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/10 11:11:08 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon_name;
	std::string _human_name;
public:
	HumanB(/* args */);
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon &newWeapon);
	void	attack();
};


