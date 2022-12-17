/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 04:12:09 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/17 23:22:45 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

int main( void )
{
	ClapTrap	cl1("cl1");
	ClapTrap	cl2("cl2");

	cl1.attack(cl2.get_Name());
	cl2.takeDamage(cl1.get_attack_damage());
	cl2.beRepaired(10);
	cl2.attack(cl1.get_Name());
	cl1.takeDamage(cl2.get_attack_damage());
	cl1.beRepaired(2);
}