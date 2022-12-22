/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:27:35 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 08:41:37 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGCAT_HPP
#define	WRONGCAT_HPP

#include <WrongAnimal.hpp>

class WrongCat : public WrongAnimal
{
	public :
					WrongCat();
					WrongCat( const WrongCat& obj );
		WrongCat&	operator = ( const WrongCat& rhs );
					~WrongCat();
		void		makeSound(  void ) const;
};

#endif