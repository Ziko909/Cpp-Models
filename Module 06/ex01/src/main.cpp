/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:26:11 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/31 01:01:34 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Data.hpp>

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
	Data	var;
	Data	*data_ptr;

	var.character = 'a';
	var.number = 100;
	data_ptr = &var;
	if (data_ptr == deserialize(serialize(data_ptr)))
		std::cout << "the same address" << std::endl;
	else
		std::cout << "does not have the same address" << std::endl;
	std::cout << "the address pointed by data_ptr : " << data_ptr << std::endl;
	std::cout << "the address after cast : 0x" << std::hex << reinterpret_cast<uintptr_t>(data_ptr) << std::endl;
}