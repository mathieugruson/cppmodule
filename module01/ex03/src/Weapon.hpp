/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:49:24 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/11 15:44:59 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include <string>
#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(/* args */);
	Weapon(std::string type);
	~Weapon();
	std::string	getType() const;
	void	setType(std::string type);
};

#endif