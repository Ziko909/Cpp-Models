/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 04:11:53 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 00:02:22 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ClapTrap_HPP_
#define _ClapTrap_HPP_

#include <iostream>

// ******************************************************** //
//                         CLASSES                         //
// ****************************************************** //

class	ClapTrap
{
	protected :
		std::string		mName;
		unsigned int	mHitPoints;	
		unsigned int	mEnergyPoints;	
		unsigned int	mAttackDamage;

	public	:
						ClapTrap();
						ClapTrap( std::string name );
						ClapTrap( const ClapTrap &obj );
						~ClapTrap();
		ClapTrap&		operator =( const ClapTrap &rhs );
		void			attack( const std::string& target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );
		std::string		get_Name( void ) const;
		unsigned int	get_attack_damage( void ) const;
};

// ******************************************************** //
//                        FUNCTIONS                        //
// ****************************************************** //

#endif
