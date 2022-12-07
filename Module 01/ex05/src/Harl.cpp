/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 05:59:35 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/08 00:57:15 by zaabou           ###   ########.fr       */
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
	FuncPtr	fptr[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[] = {"debug", "info", "warning", "error"};

	for (int index = 0; index < 4; index++)
	{
		if (level.compare(levels[index]) == 0)
		{
			(this->*fptr[index])();
			return ;
		}
	}
	std::cout << "This level does not available" << std::endl;
}