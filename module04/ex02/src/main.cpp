/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:10:57 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 17:23:20 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main (void)
{
	std::cout << "\nABSTRACT CLASS TEST\n" << std::endl;
	/* To test the subject, remove comment under */
	// A_Animal test("mammifere");
	Dog woopet;
	std::cout << woopet.getType() << std::endl;
	
	std::cout << "BRAIN TEST\n" << std::endl;
	woopet.setIdeas(3, "test");
	std::cout << "t :" << woopet.getIdeas(3150) << std::endl;
	std::cout << "t :" << woopet.getIdeas(3) << std::endl;

	std::cout << "\nMALLOC TEST\n" << std::endl;

	const A_Animal* j = new Dog;
	const A_Animal* i = new Cat;
	delete j;
	delete i;

	std::cout << "\nCOPY TEST\n" << std::endl;

	Dog Z;
	Dog X(Z);

	std::cout << "\nSUBJECT TEST\n" << std::endl;

	A_Animal *A_Animal[6];
	
	for (int i = 0; i < 6; i++)
	{
		std::cout << "index :" << i << std::endl;
		if (i % 2)
			A_Animal[i] = new Dog;
		else
			A_Animal[i] = new Cat;
	}

	for (int i = 0; i < 6; i++)
	{
		std::cout << "index :" << i << std::endl;
		if (i % 2)
			delete A_Animal[i];
		else
			delete A_Animal[i];
	}
	
}