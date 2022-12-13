/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 04:48:18 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/13 23:37:33 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed() : _fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &rhs) : _fixed_value(rhs.getRawBits()) {}

Fixed&	Fixed::operator = (const Fixed& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_value = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixed_value);	
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}

Fixed::Fixed(const int i_value) : _fixed_value(i_value * (1 << _frbits)) {}

Fixed::Fixed(const float f_value) : _fixed_value(roundf(f_value * (1 << _frbits))) {}


float	Fixed::toFloat( void ) const
{
	return ((float)this->_fixed_value / (1 << _frbits));
}

int	Fixed::toInt( void ) const
{
	return (this->_fixed_value / (1 << _frbits));

}

std::ostream&	operator << ( std::ostream& out, const Fixed& rhs )
{
	out << rhs.toFloat();
	return (out);
}

bool	Fixed::operator > ( const Fixed &rhs )
{
	return (this->_fixed_value > rhs.getRawBits());
}

bool	Fixed::operator < ( const Fixed &rhs )
{
	return (this->_fixed_value < rhs.getRawBits());
}

bool	Fixed::operator >= ( const Fixed &rhs )
{
	return (this->_fixed_value >= rhs.getRawBits());
}

bool	Fixed::operator <= ( const Fixed &rhs )
{
	return (this->_fixed_value <= rhs.getRawBits());
}

bool	Fixed::operator == ( const Fixed &rhs )
{
	return (this->_fixed_value == rhs.getRawBits());
}

bool	Fixed::operator != ( const Fixed &rhs )
{
	return (this->_fixed_value != rhs.getRawBits());
}

Fixed	Fixed::operator + ( const Fixed &rhs )
{
	Fixed	tmp;

	tmp.setRawBits(this->_fixed_value + rhs.getRawBits());
	return(tmp);
}

Fixed	Fixed::operator - ( const Fixed &rhs )
{
	Fixed	tmp;

	tmp.setRawBits(this->_fixed_value - rhs.getRawBits());
	return(tmp);
}

Fixed	Fixed::operator * ( const Fixed &rhs )
{
	return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator / ( const Fixed &rhs )
{
	return(Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	Fixed::operator ++ ( void )
{
	Fixed	tmp;

	tmp.setRawBits(++this->_fixed_value);
	return(tmp);
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed	tmp;

	tmp.setRawBits(this->_fixed_value++);
	return(tmp);
}

Fixed	Fixed::operator -- ( void )
{
	Fixed	tmp;

	tmp.setRawBits(--this->_fixed_value);
	return(tmp);
}

Fixed	Fixed::operator -- ( int )
{
	Fixed	tmp;

	tmp.setRawBits(this->_fixed_value--);
	return(tmp);
}

Fixed&	Fixed::min( Fixed& f1, Fixed& f2 )
{
	return (f1 < f2 ? f1 : f2);
}

const Fixed&	min( const Fixed& f1, const Fixed& f2 )
{
	return (f1.getRawBits() < f2.getRawBits() ? f1 : f2);
}

Fixed&	Fixed::max( Fixed& f1, Fixed& f2 )
{
	return (f1 > f2 ? f1 : f2);
}

const Fixed&	Fixed::max( const Fixed& f1, const Fixed& f2 )
{
	return (f1.getRawBits() > f2.getRawBits() ? f1 : f2);
}