/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 03:23:48 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 03:48:00 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>
#include <iostream>

HumanB::HumanB( std::string name ) : _name(name) {}

HumanB::~HumanB()
{
	std::cout << "HumanB has Been Destroyed" << std::endl;
}

void	HumanB::attack( void )
{
	std::cout << _name <<" attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

