/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 23:33:20 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 00:09:04 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {}

HumanA::~HumanA( void )
{
	std::cout << "HumanA has Been Destroyed" << std::endl;
}

void	HumanA::attack( void )
{
	std::cout << _name <<" attacks with their " << _weapon.getType() << std::endl;
}