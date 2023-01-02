/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 02:33:55 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/02 10:21:15 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_HPP
#define	WHATEVER_HPP

#include <string>
#include <iostream>

// swap template function
template<typename T>
void	swap(T& first, T& second)
{
	T	tmp;
	tmp = first;
	first = second;
	second = tmp;
}

// min template function
template<typename T>
T&	min(T& first, T& second)
{
	return ((second <= first) ? second : first);
}

// max template function
template<typename T>
T&	max(T& first, T& second)
{
	return ((second >= first) ? second : first);
}

#endif