/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 02:48:47 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/02 08:06:07 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define	ITER_HPP

#define ARRAY_SIZE 20

#include <stdio.h>
#include <iostream>

template<typename T>
void	show(T& element)
{
	std::cout << element << " ";
}

template<typename T>
void	iter(T array[], ssize_t lenght, void (*funptr)(T&))
{
	for (ssize_t index = 0; index < lenght; index++)
		funptr(array[index]);
	return ;
}

#endif
