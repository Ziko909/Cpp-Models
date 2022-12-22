/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:59:46 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 09:13:44 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain() : mNbIdeas(0)
{
	std::cout << "Brain Has Been Created by The Default Constructor" << std::endl;
}

Brain::Brain( const Brain& obj )
{
	std::cout << "Brain Has Been Created by The Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

Brain&	Brain::operator = ( const Brain& rhs)
{
	if (this != &rhs)
	{
		size_t NbIdeas = rhs.getNbIdeas();
		for (size_t i = 0; i < NbIdeas; i++)
			this->mIdeas[i] = rhs.getIdea(i);
		this->mNbIdeas = NbIdeas;
	}
	return(*this);
}

Brain::~Brain()
{
	std::cout << "Brain Has Been Destroyed" << std::endl;
}

std::string	Brain::getIdea(size_t index) const
{
	return (index < 100 && index >= 0 ? this->mIdeas[index] : "");
}

void	Brain::addIdea( std::string idea )
{
	if (this->mNbIdeas < 100)
		this->mIdeas[mNbIdeas++] = idea;
}

size_t	Brain::getNbIdeas( void ) const
{
	return (this->mNbIdeas);
}





