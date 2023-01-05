/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 22:00:26 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/05 09:47:41 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
#define	SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>

class	Span
{
	private :
		unsigned int		_maxSize;
		std::vector<int>	_vec;
	public :
				Span();
				Span( unsigned int n );
				Span( const Span& obj );
		Span&	operator = ( const Span& rhs );
				~Span();
		void	addNumber(int number);
		int		longestSpan();
		int		shortestSpan();
		template<typename it>
		void	add_range(it first, it last)
		{
			if (std::distance(first, last) + this->_vec.size() > this->_maxSize)
				throw std::out_of_range("Can't Add This Sequence to the Span");
			else
				this->_vec.insert(this->_vec.end(), first, last);
		}
};
#endif