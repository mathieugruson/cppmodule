/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:03:37 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 18:15:57 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:

		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &src);
		~WrongAnimal(void);

		WrongAnimal	&operator=(const WrongAnimal &rhs);

		void	makeSound(void) const;
		std::string		getType(void) const;

};

#endif