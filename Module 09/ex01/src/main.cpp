/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 00:17:54 by zaabou            #+#    #+#             */
/*   Updated: 2023/03/29 23:02:52 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RPN.hpp>


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "invalid number of argument : usage -> ./RPN \"expression\" " << std::endl;
        return (EXIT_FAILURE);
    }
    try {
        RPN obj;
        obj.run(av[1]);
    } catch ( std::exception& e ) {
        std::cerr << "exception : " << e.what() << std::endl;
    }
}