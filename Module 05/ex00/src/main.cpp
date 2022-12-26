/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 04:11:42 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/26 18:14:05 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Bureaucrat.hpp>

void	create_Bureaucrate(int grade)
{
	if (grade == TooLowGrade)
	{
		std::cout << "			Test : instantiate a Bureaucrat with Too Low Grade : " << std::endl;
		Bureaucrat	Brc("Brc", TooLowGrade);
	}
	if (grade == TooHighGrade)
	{
		std::cout << "			Test : instantiate a Bureaucrat with Too High Grade : " << std::endl;
		Bureaucrat	Brc("Brc", TooHighGrade);
	}
}

void	increaseGrade()
{
	std::cout << "			Test : increasing Bureaucrate Grade To an invalid Grade" << std::endl;
	Bureaucrat	Brc("Tim", 2);
	std::cout << Brc << std::endl;
	Brc.increaseGrade();
	std::cout << Brc << std::endl;
	Brc.increaseGrade();
	std::cout << Brc << std::endl;
}

void	decreaseGrade()
{
	std::cout << "			Test : decreasing Bureaucrate Grade To an invalid Grade" << std::endl;
	Bureaucrat	Brc("Tid", 149);
	std::cout << Brc << std::endl;
	Brc.decreaseGrade();
	std::cout << Brc << std::endl;
	Brc.decreaseGrade();
	std::cout << Brc << std::endl;
}

int main()
{
	try{
		create_Bureaucrate(TooLowGrade);
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caught : ";
		std::cerr << e.what() << "\n" << std::endl;
	}
	try{
		create_Bureaucrate(TooHighGrade);
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caught : ";
		std::cerr << e.what() << "\n" << std::endl;
	}
	try {
		increaseGrade();
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caught : ";
		std::cerr << e.what() << "\n" << std::endl;
	}
	try {
		decreaseGrade();
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caught : ";
		std::cerr << e.what() << std::endl;
	}
}