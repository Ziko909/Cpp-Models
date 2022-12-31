/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 22:39:31 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/31 00:43:12 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Conversion.hpp>
#include <cmath>

int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		Conversion	obj(av[1]);
		obj.run();
	}
	else
		std::cerr << "wrong argument " << std::endl;
}