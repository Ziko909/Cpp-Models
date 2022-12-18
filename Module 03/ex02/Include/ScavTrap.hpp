/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 18:13:05 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 00:09:10 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <ClapTrap.hpp>

class ScavTrap : public ClapTrap
{
	public :
					ScavTrap();
					ScavTrap( std::string name );
					ScavTrap( const ScavTrap &obj );
					~ScavTrap();
		ScavTrap&	operator = ( const ScavTrap &rhs );
		void		attack( const std::string& target );
		void		guardGate();
};


#endif
