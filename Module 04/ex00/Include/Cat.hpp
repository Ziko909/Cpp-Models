/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:47:27 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/21 13:08:13 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <Animal.hpp>

class Cat : public Animal
{
	public :
						Cat();
						Cat( const Cat& obj );
		Cat&			operator = ( const Cat& rhs );
						~Cat();
		void			makeSound( void ) const;
};

#endif