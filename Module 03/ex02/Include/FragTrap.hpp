/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:34:34 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/18 00:38:08 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
	public :
					FragTrap();
					FragTrap( std::string name );
					FragTrap( const FragTrap &obj );
					~FragTrap();
		FragTrap&	operator =( const FragTrap &rhs );
		void		highFivesGuys( void );
};
#endif