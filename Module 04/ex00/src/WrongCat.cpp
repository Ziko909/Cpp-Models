/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:46:39 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 08:42:35 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Has Been Created by The Default Constructor" << std::endl;
}

WrongCat::WrongCat( const WrongCat& obj )
{
	std::cout << "WrongCat Has Been Created by The Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongCat&	WrongCat::operator = ( const WrongCat& rhs )
{
	if (this != &rhs)
		this->mType = rhs.getType();
	return (*this);
}

WrongCat::~WrongCat ( void )
{
	std::cout << "WrongCat Has Been Destroyed" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}