/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 08:46:45 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/20 00:54:51 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>

int	main(int ac, char** av)
{
	if (ac >= 2)
	{
		int	i;
		int	j;

		i = 0;
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				std:: cout << (char)toupper(av[i][j]);
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}