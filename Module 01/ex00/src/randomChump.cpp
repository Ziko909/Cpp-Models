/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:47:21 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/29 04:05:42 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

void	randomChump( std::string name )
{
	Zombie new_zombie(name);
	new_zombie.announce();
}