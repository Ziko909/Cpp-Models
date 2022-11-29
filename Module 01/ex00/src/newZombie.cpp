/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:37:15 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/29 04:05:37 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Include.hpp>

Zombie*	newZombie( std::string name )
{
	Zombie	*new_Zombie = new Zombie(name);
	return (new_Zombie);
}
