/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:46:40 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 07:02:36 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*zombies_horde;

	zombies_horde = new(std::nothrow) Zombie[N];
	if (zombies_horde == nullptr)
		std::cerr << "Memory Allocation Failed" << std::endl;
	else
	{
		for (int i = 0; i < N; i++)
			zombies_horde[i].set_name(name);
	}
	return (zombies_horde);
}