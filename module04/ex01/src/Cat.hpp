/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:36:36 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 16:46:12 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
 private:
	Brain* _brain;
 public:
	Cat(/* args */);
	Cat(const Cat& obj);
	~Cat();
	Cat& operator=(const Cat& obj);
	void		makeSound( void ) const;
	std::string	getIdeas(unsigned int i);
	void		setIdeas(unsigned int i, std::string idea);

};

#endif
