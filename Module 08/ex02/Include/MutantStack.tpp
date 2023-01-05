/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:19:53 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/05 10:47:00 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack( const MutantStack& obj )
{
	*this = obj;
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator = ( const MutantStack& rhs )
{
	this->c = rhs.c;
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());	
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}