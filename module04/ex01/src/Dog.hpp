/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:34 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 18:45:31 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <Animal.hpp>

class Dog : public Animal
{
 private:
	/* data */
 public:
	Dog(/* args */);
	Dog(std::string type);
	Dog(const Dog& obj);
	~Dog();
	Dog& operator=(const Dog& obj);
	void	makeSound( void ) const;
};

#endif