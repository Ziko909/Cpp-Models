/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:29:23 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 09:34:18 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
	private :
		Brain*	mBrain;
	public :
					Dog();
					Dog( const Dog &obj );
		Dog&		operator = ( const Dog &rhs );
					~Dog();
		void		makeSound(  void ) const;
		void		addIdea( std::string idea );
		std::string	getIdea(size_t index) const;
		size_t		getNbIdeas( void ) const;
		void		errors( std::string Msg ) const;

};

#endif