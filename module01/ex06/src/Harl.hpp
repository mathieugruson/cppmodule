/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:40:03 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/10 16:06:14 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
public:
	Harl(/* args */);
	~Harl();
	void complain( std::string level );
};