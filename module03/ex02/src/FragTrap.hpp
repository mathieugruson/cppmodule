/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:03:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/16 14:55:38 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
 public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& obj);
	FragTrap& operator=(const FragTrap& obj);
	~FragTrap(void);
	void highFivesGuys(void);
	void attack(std::string const& target);

	void announce() const;
};

#endif