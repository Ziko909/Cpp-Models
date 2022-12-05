/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 23:27:19 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 00:08:36 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <Weapon.hpp>

class HumanA
{
	private:
		std::string	_name;
		Weapon&		_weapon;
	public:
				HumanA( std::string name, Weapon& type);
				~HumanA();
		void	 attack();
};
#endif
