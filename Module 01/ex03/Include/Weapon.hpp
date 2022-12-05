/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 23:07:10 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/04 23:12:58 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define	WEAPON_HPP

#include <string>

class Weapon
{
	private :
		std::string	_type;
	public :
							Weapon();
							Weapon( std::string type );
							~Weapon();
		const std::string&	getType( void );
		void				setType( std::string type );
};
#endif