/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:20:04 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 08:42:54 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie() : _name("none") {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << _name << " Has Been Destroyed" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name( std::string name )
{
	_name = name;
}