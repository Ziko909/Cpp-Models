/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:48:57 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/08 00:51:38 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MySed.hpp>

#include <string>
int main(int ac, char **av)
{
	if (ac == 4)
	{
		MySed	sed(av[1], av[2], av[3]);
		sed.read_file();
		sed.replace_word();
		sed.write_to_file();
	}
	else
	{
		std::cerr << "Bad Arguments" << std::endl;
		exit(EXIT_FAILURE);
	}
	return (0);
}