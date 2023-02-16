/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:14:05 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 18:17:01 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>


class Animal {
 private:
	std::string type;
 public:
	Animal(/* args */);
	Animal(const Animal& obj);
	~Animal();
	Animal& operator=(const Animal& obj);
	void	makeSound() const;

	
};

#endif

Animal::Animal(/* args */) {}
Animal::Animal(const Animal& obj) {}
Animal::~Animal() {}
Animal& Animal::operator=(const Animal& obj) {}
