/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 09:50:59 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 09:54:27 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>

AAnimal::AAnimal() : mType("no type")
{
	std::cout << "Animal Has Been Created by Default Constructor" << std::endl;
}

AAnimal::AAnimal( std::string type ) : mType(type)
{
	std::cout << "Animal Has Been Created by Parameterized Constructor" << std::endl;
}

AAnimal::AAnimal( const AAnimal& obj )
{
	std::cout << "Animal Has Been Created by Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

AAnimal&	AAnimal::operator = ( const AAnimal& rhs )
{
	if (this != &rhs)
		this->mType = rhs.getType();
	return (*this);
}

AAnimal::~AAnimal ( void )
{
	std::cout << "Animal Has Been Destroyed" << std::endl;
}

std::string	AAnimal::getType( void ) const
{
	return (this->mType);
}