/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:19:22 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/25 18:16:19 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stdexcept>
# include <list>
# include <vector>
# include <iterator>

template < typename T >
typename T::iterator	easyfind(T& container, int value)
{
	return (std::find(container.begin(), container.end(), value));
}

#endif