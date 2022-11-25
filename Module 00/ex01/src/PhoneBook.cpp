/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 01:42:02 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/25 06:28:41 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <Include.hpp>
PhoneBook::PhoneBook(void)
{
	size = 0;
	av_place = 0;
}

void	PhoneBook::creat_new_contact(void)
{
	if (av_place == 8)
		av_place = 0;
	this->list[av_place].set_info();
	size++;
	av_place++;
	if (size > 8)
		size = 8;
	return ;
}

void	PhoneBook::search(void)
{
	std::string	input;
	int	index;
	
	if (size != 0)
	{
		this->show_list();
		while (true)
		{
			get_input(input, 's');
			index = atoi(input.c_str());
			if (index > 8 || index < 1)
				std::cerr << "Please Enter number [1->8]" << std::endl;
			else
			{
				this->show_contact(index);
				break;
			}
		}
	}
	else
		std::cout << "The List Is Empty" << std::endl;
}

void	PhoneBook::show_list(void)
{
	int	index;
	std::string element;

	index = 1;
	if (size != 0)
	{
		std::cout << std::setfill('~') << std::setw(62) << "\n";
		std::cout << std::setfill(' ') << "| index" << std::setw(20) << "| first name" << std::setw(15) << "| last name " << std::setw(14) << "| nickname " << std::setw(6) << "|\n";
		std::cout << std::setfill('~') << std::setw(62) << "\n";
		while (index <= size)
		{
			std::cout << std::setfill(' ') << "|" << index << std::setw(14) << "|";
			element = this->list[index - 1].get_info(0);
			if (element.length() > 10)
				std::cout << element.substr(0, 9) + "." << std::setw(5) << "|";
			else
				std::cout << element << std::setw(15 - element.length()) << "|";
			element = this->list[index - 1].get_info(1);
			if (element.length() > 10)
				std::cout << element.substr(0, 9) + "." << std::setw(5) << "|";
			else
				std::cout << element << std::setw(15 - element.length()) << "|";
			element = this->list[index - 1].get_info(2);
			if (element.length() > 10)
				std::cout << element.substr(0, 9) + "." << std::setw(5) << "|";
			else
				std::cout << element << std::setw(15 - element.length()) << "|";
			std::cout << "\n";
			index++;
		}
	}
}

void	PhoneBook::show_contact(int index)
{
	if (index <= size)
	{
		std::cout << "First Name : " << this->list[index - 1].get_info(0) << std::endl;
		std::cout << "Last Name : " << this->list[index - 1].get_info(1) << std::endl;
		std::cout << "Nickname : " << this->list[index - 1].get_info(2) << std::endl;
		std::cout << "Phone : " << this->list[index - 1].get_info(3) << std::endl;
		std::cout << "Darkest Secret : " << this->list[index - 1].get_info(4) << std::endl;
	}
	else
		std::cout << "Contact Does Not Exist" << std::endl;
}


