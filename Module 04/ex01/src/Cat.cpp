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
	this->mBrain = new(std::nothrow) Brain;

	if (mBrain == nullptr)
		errors("Memory Allocation Failed");
	std::cout << "Cat Has Been Created by The Default Constructor" << std::endl;
}

Cat::Cat( const Cat& obj )
{
	this->mBrain = new(std::nothrow) Brain;

	if (mBrain == nullptr)
		errors("Memory Allocation Failed");
	std::cout << "Cat Has Been Created by The Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat&	Cat::operator = ( const Cat& rhs )
{
	if (this != &rhs)
	{
		this->mType = rhs.getType();
		*(this->mBrain) = *(rhs.mBrain);
	}
	return (*this);
}

Cat::~Cat ( void )
{
	delete mBrain;
	std::cout << "Cat Has Been Destroyed" << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::addIdea( std::string idea )
{
	this->mBrain->addIdea(idea);
}

std::string	Cat::getIdea(size_t index) const
{
	return (this->mBrain->getIdea(index));
}

size_t	Cat::getNbIdeas( void ) const
{
	return (this->mBrain->getNbIdeas());
}

void	Cat::errors( std::string Msg ) const
{
	std::cerr << Msg << std::endl;
	exit(EXIT_FAILURE);
}

