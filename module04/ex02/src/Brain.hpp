/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:58:51 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/18 16:02:43 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
	std::string _ideas[100];

	public:
	Brain();
	Brain(Brain const &obj);
	~Brain();
	Brain &operator=(Brain const &obj);
	std::string	getIdeas(unsigned int i);
	void		setIdeas(unsigned int i, std::string idea);

};

#endif