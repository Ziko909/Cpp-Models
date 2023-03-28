/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:50:17 by zaabou            #+#    #+#             */
/*   Updated: 2023/03/28 23:50:29 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <BitcoinExchange.hpp>
#include <fstream>


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "error : Usage ./btc input_file" << std::endl;
		return (EXIT_FAILURE);
	}
	try {
		BitcoinExchange	obj;
		obj.run(av[1]);
	} catch (std::exception& e) {
		std::cerr << "exception : " << e.what() << std::endl;
	}
}