/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 04:53:50 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/13 23:25:20 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixed_value;
		static const	int	_frbits = 8;
	public:
						Fixed();
						Fixed( const int i_value );
						Fixed( const float f_value );
						Fixed( const Fixed& rhs );
		Fixed&			operator = ( const Fixed& rhs );
						~Fixed();
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
		bool			operator > ( const Fixed &rhs );
		bool			operator < ( const Fixed &rhs );
		bool			operator >= ( const Fixed &rhs );
		bool			operator <= ( const Fixed &rhs );
		bool			operator == ( const Fixed &rhs );
		bool			operator != ( const Fixed &rhs );
		Fixed			operator + ( const Fixed &rhs );
		Fixed			operator - ( const Fixed &rhs );
		Fixed			operator * ( const Fixed &rhs );
		Fixed			operator / ( const Fixed &rhs );
		Fixed			operator ++ ( void );
		Fixed			operator ++ ( int );
		Fixed			operator -- ( void );
		Fixed			operator -- ( int );
		static Fixed&		min( Fixed& f1, Fixed& f2 );
		static const Fixed&	min( const Fixed& f1, const Fixed& f2 );
		static Fixed&		max( Fixed& f1, Fixed& f2 );
		static const Fixed&	max( const Fixed& f1, const Fixed& f2 );
};
std::ostream&	operator << ( std::ostream& out, const Fixed& rhs );
#endif