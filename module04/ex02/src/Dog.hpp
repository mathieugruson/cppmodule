/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:40:34 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 17:17:33 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "A_Animal.hpp"
#include "Brain.hpp"

class Dog : public A_Animal
{
 private:
	Brain* _brain;
 public:
	Dog(/* args */);
	Dog(std::string type);
	Dog(const Dog& obj);
	~Dog();
	Dog& operator=(const Dog& obj);
	void		makeSound( void ) const ;
	std::string	getIdeas(unsigned int i);
	void		setIdeas(unsigned int i, std::string idea);
};

#endif