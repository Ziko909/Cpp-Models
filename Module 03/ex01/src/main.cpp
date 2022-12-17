/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 04:12:09 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 00:16:52 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

int main( void )
{
	ScavTrap	sc1("sc1");
	ScavTrap	sc2("sc2");

	sc1.attack(sc2.get_Name());
	sc2.takeDamage(sc2.get_attack_damage());
	sc2.beRepaired(3);
	sc2.attack(sc1.get_Name());
	sc1.takeDamage(sc2.get_attack_damage());
	sc2.guardGate();
	return (0);
}