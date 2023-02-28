/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:43:32 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/28 13:57:01 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# define DEBUG 0

template< typename T >
class MutantStack : public std::stack<T>
{

	public:

		MutantStack<T>( void );
		MutantStack<T>( const MutantStack<T> & obj );
		~MutantStack<T>( void );
		MutantStack<T> &	operator=( const MutantStack<T> & obj );

		typedef typename MutantStack<T>::stack::container_type::iterator iterator;
		typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
		typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator	const_reverse_iterator; /* another way is to directly go to through std::stack as 
		the iterator or public member of deque */

		iterator				begin( void );
		iterator				end( void );
		reverse_iterator		rbegin( void );
		reverse_iterator		rend( void );
		const_iterator			cbegin( void ) const;
		const_iterator			cend( void ) const;
		const_reverse_iterator	crbegin( void ) const;
		const_reverse_iterator	crend( void ) const;

};

# include "MutantStack.tpp"

#endif

