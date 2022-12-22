/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 09:49:41 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 09:54:33 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected :
		std::string	mType;
	public :
						AAnimal();
						AAnimal( std::string type );
						AAnimal( const AAnimal &obj );
		AAnimal&			operator = ( const AAnimal &rhs );
		virtual			~AAnimal();
		virtual	void	makeSound(  void ) const = 0;
		std::string		getType( void ) const;
};

#endif