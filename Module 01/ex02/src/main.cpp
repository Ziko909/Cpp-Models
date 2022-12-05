/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 05:23:08 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/05 09:22:08 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string		var("HI THIS IS BRAIN");
	std::string&	stringREF = var;
	std::string		*stringPTR = &var;
	
	std::cout << "Memory Address of var : " << &var << std::endl; 
	std::cout << "Memory Address held by ptr Is : " << stringPTR << std::endl; 
	std::cout << "Memory Address held by ref Is : " << &stringREF << std::endl; 

	std::cout << "Value of var : " << var << std::endl;
	std::cout <<  "Value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
}