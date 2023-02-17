/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:06:41 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/17 16:14:11 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private :

	public :
		WrongCat(void);
		WrongCat(const WrongCat &src);
		~WrongCat(void) 
		WrongCat	&operator=(const WrongCat &rhs);
};

#endif