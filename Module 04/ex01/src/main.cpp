/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:08:22 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/22 09:40:46 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

void	Allocation(Animal* (&Animals)[10])
{
	for (size_t i = 0; i < 10; i++)
	{
		if (i < 5)
			Animals[i] = new(std::nothrow) Dog;
		else
			Animals[i] = new(std::nothrow) Cat;
		if (Animals[i] == nullptr)
		{
			std::cerr << "" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
}

int main( void )
{
	Animal*	Animals[10];

	Allocation(Animals);

	for (size_t i = 0; i < 10; i++)
		delete Animals[i];

	return (0);
}