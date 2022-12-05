/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 22:49:34 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/04 23:15:16 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>
#include <iostream>
Weapon::Weapon() : _type("No Type") {}

Weapon::Weapon( std::string type ) : _type(type) {}

Weapon::~Weapon()
{
	std::cout << "Weapon Has Been Destroyed" << std::endl;
}

void	Weapon::setType( std::string type )	 { _type = type; };

const std::string&	Weapon::getType( void ) { return _type; };