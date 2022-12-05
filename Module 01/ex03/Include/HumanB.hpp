/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:24:09 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 03:48:03 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
#define HUMAN_B

#include <Weapon.hpp>

class HumanB
{
	private :
		std::string	_name;
		Weapon		*_weapon;
	public :
				HumanB( std::string name );
				~HumanB();
		void	attack();
		void	setWeapon(Weapon& weapon);
};

#endif