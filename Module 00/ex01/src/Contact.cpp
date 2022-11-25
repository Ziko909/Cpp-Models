/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:52:14 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/25 06:26:03 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

void	Contact::set_info(void)
{
	std::cout << "Please enter first name :" << std::endl;
	get_input(first_name, 's');
	std::cout << "Please enter last name :"  << std::endl;
	get_input(last_name, 's');
	std::cout << "Please enter nickname :" << std::endl;
	get_input(nick_name, 's');
	std::cout << "Please enter phone number :" << std::endl;
	get_input(phone_number, 'n');
	std::cout << "Please enter darckest secret :" << std::endl;
	get_input(darkest_secret, 's');
}

std::string	Contact::get_info(int n)
{
	if (n == 0)
		return (first_name);
	else if (n == 1)
		return (last_name);
	else if (n == 2)
		return (nick_name);
	else if (n == 3)
		return (phone_number);
	else if (n == 4)
		return (darkest_secret);
	return ("");
}
