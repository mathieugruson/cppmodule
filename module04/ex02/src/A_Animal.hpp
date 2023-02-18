/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:14:05 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 17:14:58 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_Animal_CPP
# define A_Animal_CPP

# include <iostream>
# include <string>

class A_Animal {
 protected:
	std::string _type;
 public:
	A_Animal(/* args */);
	A_Animal(std::string type);
	A_Animal(const A_Animal& obj);
	virtual ~A_Animal();
	A_Animal& operator=(const A_Animal& obj);
	virtual void	makeSound( void ) const = 0;
	std::string getType(void) const;
};

#endif


