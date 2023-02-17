/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:09:01 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 19:07:25 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n00\n" << std::endl;
	
	const Animal* meta = new Animal();
	
	std::cout << "\n01\n" << std::endl;

	const Animal* dog = new Dog();

	std::cout << "\n02\n" << std::endl;

	const Animal* cat = new Cat();

	std::cout << "\n03\n" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();

	std::cout << "\n04\n" << std::endl;

	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\n05\n" << std::endl;

	std::cout << meta->getType() << " : ";
	meta->makeSound();

	std::cout << "\n06\n" << std::endl;

	std::cout << dog->getType() << " : ";
	dog->makeSound();

	std::cout << "\n07\n" << std::endl;

	std::cout << cat->getType() << " : ";
	cat->makeSound();

	std::cout << "\n08\n" << std::endl;
	std::cout << wrongAnimal->getType() << " : ";
	wrongAnimal->makeSound();

	std::cout << "\n09\n" << std::endl;
	std::cout << wrongCat->getType() << " : ";
	wrongCat->makeSound();

	std::cout << "\n10\n" << std::endl;
	delete meta;
	std::cout << "\n11\n" << std::endl;
	delete cat;
	std::cout << "\n12\n" << std::endl;
	delete dog;
	std::cout << "\n13\n" << std::endl;
	delete wrongAnimal;
	std::cout << "\n14\n" << std::endl;
	delete wrongCat;

	return (0);
}

// int main(void)
// {
// 	Dog Zoubir;
// 	std::cout << "-1\n" ;
// 	Dog Mathieu(Zoubir);
// 	std::cout << "-1bis\n" ;
// 	Dog *Allen = new Dog();
// 	(void) Allen;
// 	std::cout << "0bis\n" ;
// 	Dog test(*Allen);
// 	std::cout << "0ter\n" ;
// 	(void)test;
// 	std::cout << "0\n" ;
// 	std::cout << test.getType() << std::endl;
// 	std::cout << "1\n" ;
// 	std::cout << Allen->getType() << std::endl;
// }
