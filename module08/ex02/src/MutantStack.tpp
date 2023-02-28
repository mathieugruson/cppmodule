/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:17:19 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/28 13:40:41 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template< typename T >
MutantStack<T>::MutantStack( void ) : std::stack<T>()
{
	if ( DEBUG )
		std::cout << "MutantStack<T> Constructor called" << std::endl;
}

template< typename T >
MutantStack<T>::MutantStack( const MutantStack<T> & obj ) : std::stack<T>( obj )
{
	if ( DEBUG )
		std::cout << "MutantStack<T> Copy constructor called" << std::endl;
}

template< typename T >
MutantStack<T>::~MutantStack( void )
{
	if ( DEBUG )
		std::cout << "MutantStack<T> Destructor called" << std::endl;
}

template< typename T >
MutantStack<T> &	MutantStack<T>::operator=( const MutantStack<T> & obj )
{
	if ( DEBUG )
		std::cout << "MutantStack<T> operator= assignement called" << std::endl;
	*this = obj;
	return (*this);
}

/* Exploring different ways of doing */

template< typename T >
typename MutantStack<T>::stack::container_type::iterator					MutantStack<T>::begin( void )
{
	if (DEBUG)
		std::cout << "begin called" << std::endl;
	return ( this->c.begin() );
}

/* If I want to use the typedef, i need MutantStack<T> before, even if MutantStack<T> is in the typedef */
template< typename T >
typename MutantStack<T>::iterator					MutantStack<T>::end( void )
{
	if (DEBUG)
		std::cout << "end called" << std::endl;
	return ( this->c.end() );
}

template< typename T >
typename MutantStack<T>::stack::container_type::reverse_iterator			MutantStack<T>::rbegin( void )
{
	if (DEBUG)
		std::cout << "rbegin called" << std::endl;
	return ( this->c.rbegin() );
}

template< typename T >
typename MutantStack<T>::stack::container_type::reverse_iterator			MutantStack<T>::rend( void )
{
	if (DEBUG)
		std::cout << "rend called" << std::endl;
	return ( this->c.rend() );
}

template< typename T >
typename MutantStack<T>::stack::container_type::const_iterator				MutantStack<T>::cbegin( void ) const
{
	if (DEBUG)
		std::cout << "cbegin called" << std::endl;
	return ( this->c.begin() );
}

template< typename T >
typename MutantStack<T>::stack::container_type::const_iterator				MutantStack<T>::cend( void ) const
{
	std::cout << "cend called" << std::endl;
	return ( this->c.end() );
}

template< typename T >
typename MutantStack<T>::const_reverse_iterator		MutantStack<T>::crbegin( void ) const
{
	if (DEBUG)
		std::cout << "rbegin called" << std::endl;
	return ( this->c.rbegin() );
}

/* I could also just return a std::... instead of using MutantStack<T>. But if i use the typedef with std::stack. I need to 
put MutantStack<T> before to indicate that the typedef is in this function I guess (see the hpp):*/

template< typename T >
typename std::stack<T>::container_type::const_reverse_iterator		MutantStack<T>::crend( void ) const
{
	if (DEBUG)
		std::cout << "rend called" << std::endl;
	return ( this->c.rend() );
}

#endif
