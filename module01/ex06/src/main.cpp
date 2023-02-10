/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:55:14 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/10 16:32:33 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "argc error" << std::endl;
		return (1);
	}
	
	Harl the_real_harl;

	the_real_harl.complain(argv[1]);
	return (0);
}