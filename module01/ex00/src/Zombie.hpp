/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:16:03 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 12:45:05 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie(/* args */);
		Zombie(std::string name);
		~Zombie();

		void	announce( void ) const;

};

Zombie* newZombie(std::string name);
void	randomChump( std::string name);

#endif
