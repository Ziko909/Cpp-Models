/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:20:25 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/27 18:25:06 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce( void );
};
#endif