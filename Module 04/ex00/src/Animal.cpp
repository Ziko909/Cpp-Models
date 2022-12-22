/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:50:58 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 08:31:10 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : mType("no type")
{
	std::cout << "Animal Has Been Created by Default Constructor" << std::endl;
}

Animal::Animal( std::string type ) : mType(type)
{
	std::cout << "Animal Has Been Created by Parameterized Constructor" << std::endl;
}

Animal::Animal( const Animal& obj )
{
	std::cout << "Animal Has Been Created by Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal&	Animal::operator = ( const Animal& rhs )
{
	if (this != &rhs)
		this->mType = rhs.getType();
	return (*this);
}

Animal::~Animal ( void )
{
	std::cout << "Animal Has Been Destroyed" << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal Class Has No Specific Sound" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->mType);
}