/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 04:04:16 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/02 09:13:10 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
	private :
		T		*m_array;
		size_t	m_size;
	public :
			Array();
			Array( unsigned int n );
			Array( const Array& obj );
	Array&	operator = ( const Array& rhs );
			~Array();
	T&		operator [] ( size_t index );
	T		operator [] ( size_t index ) const;
	size_t	size() const;
};

#include <Array.tpp>

#endif