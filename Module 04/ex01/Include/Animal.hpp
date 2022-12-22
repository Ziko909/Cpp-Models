/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:47:27 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/21 18:12:41 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected :
		std::string	mType;
	public :
						Animal();
						Animal( std::string type );
						Animal( const Animal &obj );
		Animal&			operator = ( const Animal &rhs );
		virtual			~Animal();
		virtual	void	makeSound(  void ) const;
		std::string		getType( void ) const;
};

#endif