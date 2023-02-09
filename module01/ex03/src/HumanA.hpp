/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:57:07 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 16:37:58 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string _human_name;
	Weapon &_weapon_name;
public:
	HumanA(std::string name, Weapon &Weapon);
	~HumanA();
	void	attack() const;
};


