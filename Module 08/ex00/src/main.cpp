/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 06:10:44 by zaabou            #+#    #+#             */
/*   Updated: 2023/01/04 17:52:27 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>

#include <list>
#include <vector>

int	main()
{
	std::vector<int>	v(10);
	std::list<int>		l;

	for (size_t i = 0; i < 10; i++)
	{	
		v.push_back(i);
		l.push_back(i);
	}
	try{
		easyfind(v, 5);
		easyfind(l, 1);
	} catch (const char *msg){
		std::cerr << msg << std::endl;
	}
	try{
		easyfind(v, 10);
	} catch (const char *msg){
		std::cerr << msg << std::endl;
	}
	try{
		easyfind(l, 11);
	} catch(const char *msg){
		std::cerr << msg << std::endl;
	}
}