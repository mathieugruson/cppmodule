/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:27:53 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/25 15:36:09 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void iter (T *array, int length, void (*foo)(T&))
{
	for (int i = 0; i < length; i++)
	{
		foo(array[i]);
	}
}

template<typename T>
void print(T &value)
{
	std::cout << value << std::endl;
}

#endif
