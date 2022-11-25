/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:07:14 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/25 06:28:56 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Include.hpp>

void	get_input(std::string& element, int mode)
{
	if (!(std::getline(std::cin, element)))
		exit(0);
	if (element.empty() == true)
	{
		std::cerr << "Please Enter Something" << std::endl;
		get_input(element, mode);
	}
	if (mode == 'n' && (strspn(element.c_str(), "0123456789") != element.length()))
	{
		std::cout << "Please Enter An Number" << std::endl;
		get_input(element, mode);
	}
}

int main(void)
{
	std::string	cmd;
	PhoneBook	phone_book;
	while (true)
	{
		std::cout << "Please Enter One of Those Commands: ADD | SEARCH | EXIT" << std::endl;
		if (!(std::getline(std::cin, cmd)) || !(cmd.compare("EXIT")))
			break ;
		else if (!(cmd.compare("ADD")))
			phone_book.creat_new_contact();
		else if (!(cmd.compare("SEARCH")))
			phone_book.search();
	}
	return (0);
}