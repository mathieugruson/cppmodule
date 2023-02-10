/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 12:53:07 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/09 13:29:00 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie(/* args */);
		Zombie(std::string name);
		~Zombie();

		void	announce( void ) const;
		void	setName( std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
