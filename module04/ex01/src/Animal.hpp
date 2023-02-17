/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:14:05 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 17:29:22 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CPP
# define ANIMAL_CPP

# include <iostream>
# include <string>

class Animal {
 protected:
	std::string _type;
 public:
	Animal(/* args */);
	Animal(std::string type);
	Animal(const Animal& obj);
	virtual ~Animal();
	Animal& operator=(const Animal& obj);
	virtual void	makeSound( void ) const;
	std::string getType(void) const;
};

#endif


