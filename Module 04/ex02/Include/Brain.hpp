/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:57:59 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 09:13:34 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_HPP
#define	BRAIN_HPP

#include <iostream>

class Brain
{
	private :
		std::string	mIdeas[100];
		size_t		mNbIdeas;
	public:
		Brain();
		Brain( const Brain& obj );
		Brain&	operator = ( const Brain& rhs );
		~Brain();
		std::string	getIdea( size_t index ) const;
		void		addIdea( std::string idea );
		size_t		getNbIdeas( void ) const;
		
};

#endif