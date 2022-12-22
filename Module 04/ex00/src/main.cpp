/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 15:08:22 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/21 19:35:26 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

void	testAnimals( void )
{
	std::cout << "\t\t\t\tAnimal Test" << std::endl;

	const Animal* Animals[3];

	Animals[0] = new(std::nothrow) Animal;
	Animals[1] = new(std::nothrow) Cat;
	Animals[2] = new(std::nothrow) Dog;

	for (int i = 0; i < 3; i++)
	{
		if (Animals[i] == nullptr)
		{
			std::cerr << "Memory Allocation Failed" << std::endl;
			exit(EXIT_FAILURE);
		}
		std::cout << "Im a " << Animals[i]->getType() << " And My Sound Is : ";
		Animals[i]->makeSound();
		delete Animals[i];
	}
}

void	testWAnimals( void )
{
	std::cout << "\t\t\t\tWrongAnimal Test" << std::endl;
	const WrongAnimal* WAnimals[2];

	WAnimals[0] = new(std::nothrow) WrongAnimal;
	WAnimals[1] = new(std::nothrow) WrongCat;

	for (int i = 0; i < 2; i++)
	{
		if (WAnimals[i] == nullptr)
		{
			std::cerr << "Memory Allocation Failed" << std::endl;
			exit(EXIT_FAILURE);
		}
		std::cout << "Im a " << WAnimals[i]->getType() << " And My Sound Is : ";
		WAnimals[i]->makeSound();
		delete WAnimals[i];
	}
}

int main( void )
{
	testAnimals();
	testWAnimals();
	
	return (EXIT_SUCCESS);
}