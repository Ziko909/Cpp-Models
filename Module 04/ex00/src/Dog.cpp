/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:29:10 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/21 15:07:16 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Has Been Created by The Default Constructor" << std::endl;
}

Dog::Dog( const Dog& obj )
{
	std::cout << "Dog Has Been Created by The Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog&	Dog::operator = ( const Dog& rhs )
{
	if (this != &rhs)
		this->mType = rhs.getType();
	return (*this);
}

Dog::~Dog ( void )
{
	std::cout << "Dog Has Been Destroyed" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wow" << std::endl;
}