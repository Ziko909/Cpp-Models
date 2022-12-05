/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 03:43:05 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/04 03:45:26 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INCLUDE_H
#define INCLUDE_H

#include <Zombie.hpp>

// create Hord Of Zombie On The Heap
Zombie*	zombieHorde( int N, std::string name );
#endif