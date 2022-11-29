/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 04:03:05 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/29 04:05:17 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
#define INCLUDE_H

# include <Zombie.hpp>

// Create Zombie
	//	stack
void	randomChump( std::string name );
	//	heap
Zombie*	newZombie( std::string name );

#endif