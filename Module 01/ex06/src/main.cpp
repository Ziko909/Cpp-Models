/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 19:17:52 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/08 01:37:44 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main( int ac, char **av )
{
	if (ac != 2)
	{
		std::cout << "Please Enter one level as argument" << std::endl;
		return (0);
	}
	Harl	obj;
	obj.complain(av[1]);
	return (0);
}