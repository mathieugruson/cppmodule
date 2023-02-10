/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:55:14 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/10 16:06:57 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl the_real_one;

	the_real_one.complain("DEBUG");
	the_real_one.complain("INFO");
	the_real_one.complain("WARNING");
	the_real_one.complain("ERROR");
	return (0);
}