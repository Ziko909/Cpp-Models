/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 04:12:09 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 00:38:54 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

int main( void )
{
	FragTrap	fr1("fr1");
	FragTrap	fr2("fr2");

	fr1.attack(fr2.get_Name());
	fr2.takeDamage(fr1.get_attack_damage());
	fr1.attack(fr2.get_Name());
	fr2.takeDamage(fr1.get_attack_damage());
	fr2.beRepaired(100);
	fr1.highFivesGuys();
	return (0);
}