/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:59:35 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/08 01:35:29 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

void	Harl::debug( void )
{
	std::cout << "Debuggin Level Called" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "Info Level Called" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "Warning Level Called" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "Error Level Called" << std::endl;
}

void	Harl::complain( std::string level )
{
	std::string	levels[] = {"debug", "info", "warning", "error"};
	short	n_level;
	for (int index = 0; index < 4; index++)
	{
		if (level.compare(levels[index]) == 0)
		{
			n_level = index + 1;
			break ;
		}
	}
	switch (n_level)
	{
		case 1:
			debug();
		case 2:
			info();
		case 3:
			warning();
		case 4:
			error();
			break ;
		default :
			std::cout << "This level does not available" << std::endl;
			break ;
	}
}