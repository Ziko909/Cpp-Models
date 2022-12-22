/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:29:10 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 09:35:25 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal("Dog")
{
	this->mBrain = new(std::nothrow) Brain;

	if (mBrain == nullptr)
		errors("Memory Allocation Failed");
	std::cout << "Dog Has Been Created by The Default Constructor" << std::endl;
}

Dog::Dog( const Dog& obj )
{
	std::cout << "Dog Has Been Created by The Copy Constructor" << std::endl;
	this->mBrain = new(std::nothrow) Brain;

	if (mBrain == nullptr)
		errors("Memory Allocation Failed");
	if (this != &obj)
		*this = obj;
}

Dog&	Dog::operator = ( const Dog& rhs )
{
	if (this != &rhs)
	{
		this->mType = rhs.getType();
		*(this->mBrain) = *(rhs.mBrain);
	}
	return (*this);
}

Dog::~Dog ( void )
{
	delete mBrain;
	std::cout << "Dog Has Been Destroyed" << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wow" << std::endl;
}

void	Dog::addIdea( std::string idea )
{
	this->mBrain->addIdea(idea);
}

std::string	Dog::getIdea(size_t index) const
{
	return (this->mBrain->getIdea(index));
}

size_t	Dog::getNbIdeas( void ) const
{
	return (this->mBrain->getNbIdeas());
}

void	Dog::errors( std::string Msg ) const
{
	std::cerr << Msg << std::endl;
	exit(EXIT_FAILURE);
}