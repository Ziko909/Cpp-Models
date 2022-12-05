/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:19:56 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 08:44:27 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

int	main()
{
	Zombie	*new_zombie;

	new_zombie = newZombie("one");
	if (new_zombie == NULL)
	{
		std::cerr << "Memory Allocation Failed" << std::endl;
		return (EXIT_FAILURE);
	}
	new_zombie->announce();
	randomChump("two");
	delete new_zombie;
	return (EXIT_SUCCESS);
}