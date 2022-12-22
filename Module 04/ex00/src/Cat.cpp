/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:50:58 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/21 13:06:50 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Has Been Created by The Default Constructor" << std::endl;
}

Cat::Cat( const Cat& obj )
{
	std::cout << "Cat Has Been Created by The Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat&	Cat::operator = ( const Cat& rhs )
{
	if (this != &rhs)
		this->mType = rhs.getType();
	return (*this);
}

Cat::~Cat ( void )
{
	std::cout << "Cat Has Been Destroyed" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}