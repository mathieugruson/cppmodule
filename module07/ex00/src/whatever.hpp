/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 14:51:45 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/24 14:51:46 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
	if (a < b) 
	{
		return (a);
	}
	else 
	{
		return (b);
	}
}

template<typename T>
T max(T &a, T &b)
{
	if (a > b) 
	{
		return (a);
	}
	else 
	{
		return (b);
	}
}

#endif
