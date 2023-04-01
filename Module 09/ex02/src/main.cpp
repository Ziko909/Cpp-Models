/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 01:16:33 by zaabou            #+#    #+#             */
/*   Updated: 2023/04/01 22:52:46 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PmergeMe.hpp>

int main(int ac, char **av)
{
    if (ac != 1)
    {
        try {
            PmergeMe    obj;
            obj.run(ac, av);
        } catch (std::exception& e){
            std::cerr << "exception " << e.what() << std::endl;
        } 
    }
}