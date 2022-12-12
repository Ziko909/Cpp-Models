/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 04:53:50 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/12 19:18:44 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <cmath>
#include <iostream>

class Fixed
{
	private:
		int					_fixed_value;
		static const	int	_frbits = 8;
	public:
				Fixed();
				Fixed( const Fixed &rhs );
		Fixed&	operator = ( const Fixed& rhs );
				~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};
#endif