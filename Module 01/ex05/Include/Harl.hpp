/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:43:18 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/08 00:57:49 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public :
		void	complain( std::string level );
};
typedef	void	(Harl::*FuncPtr) ( void );
#endif