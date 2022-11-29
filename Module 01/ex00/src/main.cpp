/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:19:56 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/29 04:05:28 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

int	main()
{
	Zombie	*new_zombie;

	new_zombie = newZombie("one");
	new_zombie->announce();
	randomChump("two");
	delete new_zombie;
	return (0);
}