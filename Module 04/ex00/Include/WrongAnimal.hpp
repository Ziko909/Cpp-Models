/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:27:28 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 08:37:33 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define	WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected :
		std::string	mType;
	public :
						WrongAnimal();
						WrongAnimal( std::string type );
						WrongAnimal( const WrongAnimal& obj );
		WrongAnimal&	operator = ( const WrongAnimal& rhs );
		virtual			~WrongAnimal();
		void			makeSound(  void ) const;
		std::string		getType( void ) const;
};


#endif