/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:45:21 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 08:40:57 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : mType("no type")
{
	std::cout << "WrongAnimal Has Been Created by Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : mType(type)
{
	std::cout << "WrongAnimal Has Been Created by Parameterized Constructor" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& obj )
{
	std::cout << "WrongAnimal Has Been Created by Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongAnimal&	WrongAnimal::operator = ( const WrongAnimal& rhs )
{
	if (this != &rhs)
		this->mType = rhs.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal ( void )
{
	std::cout << "WrongAnimal Has Been Destroyed" << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal Class Has No Specific Sound" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->mType);
}