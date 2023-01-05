/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 06:01:29 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/04 06:21:35 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	EASYFIND_HPP
#define	EASYFIND_HPP

#include <algorithm>
#include <iostream>

template<typename T>
void	easyfind(T& cntr, const int& number)
{
	typename T::iterator	it;
	it = std::find(cntr.begin(), cntr.end(), number);
	if (it != cntr.end())
		std::cout << "the number " << number << " is found" << std::endl;
	else
		throw "not found";
}

#endif
