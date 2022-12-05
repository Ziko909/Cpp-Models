/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:37:15 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 08:45:58 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Include.hpp>

Zombie*	newZombie( std::string name )
{
	Zombie	*new_Zombie;
	
	new_Zombie = new(std::nothrow) Zombie(name);
	return (new_Zombie);
}
