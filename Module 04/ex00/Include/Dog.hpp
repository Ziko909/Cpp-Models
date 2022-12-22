/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:29:23 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 08:33:53 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define DOG_HPP

#include <Animal.hpp>

class Dog : public Animal
{
	public :
				Dog();
				Dog( const Dog& obj );
		Dog&	operator = ( const Dog& rhs );
				~Dog();
		void	makeSound(  void ) const;
};
#endif