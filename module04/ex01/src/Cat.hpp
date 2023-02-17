/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:36:36 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 16:21:44 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <Animal.hpp>

class Cat : public Animal
{
 private:
	/* data */
 public:
	Cat(/* args */);
	Cat(const Cat& obj);
	~Cat();
	Cat& operator=(const Cat& obj);
	void	makeSound( void ) const;

};

#endif
