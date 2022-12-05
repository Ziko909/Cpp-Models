/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:48:06 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 08:41:45 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

int	main( void )
{
	{
		Zombie	*zombies_horde;

		zombies_horde =  zombieHorde(15, "test");
		if (zombies_horde == nullptr)
			return (EXIT_FAILURE);
		for (int i = 0; i < 15; i++)
			zombies_horde[i].announce();
		delete[] zombies_horde;
	}
}