/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 02:38:48 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/02 08:04:18 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iter.hpp>

int main( void )
{
	int		i_array[ARRAY_SIZE];
	char	c_array[ARRAY_SIZE];
	float	f_array[ARRAY_SIZE];

	for (size_t index = 0; index < ARRAY_SIZE; index++)
	{
		i_array[index] = index;
		c_array[index] = index + 97;
		f_array[index] = index + 0.5;
	}
	std::cout << " int array ";
	iter(i_array, ARRAY_SIZE, show);
	std::cout << std::endl;
	std::cout << " char array ";
	iter(c_array, ARRAY_SIZE, show);
	std::cout << std::endl;
	std::cout << " float array ";
	iter(f_array, ARRAY_SIZE, show);
}