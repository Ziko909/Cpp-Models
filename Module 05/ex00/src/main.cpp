/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 04:11:42 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/25 17:57:33 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <Bureaucrat.hpp>

void	create_Bureaucrate(int grade)
{
	if (grade == TooLowGrade)
	{
		std::cout << "			Test : instantiate a Bureaucrat with Too Low Grade grade : " << std::endl;
		Bureaucrat	Brc("Brc", TooLowGrade);
	}
	if (grade == TooHighGrade)
	{
		std::cout << "			Test : instantiate a Bureaucrat with Too High Grade grade : " << std::endl;
		Bureaucrat	Brc("Brc", TooHighGrade);
	}
}

void	increaseGrade()
{
	std::cout << "			Test : increasing Bureaucrate Grade To an invalid Grade" << std::endl;
	Bureaucrat	Brc("Tim", 2);
	std::cout << Brc;
	Brc.increaseGrade();
	std::cout << Brc;
	Brc.increaseGrade();
	std::cout << Brc;
}

void	decreaseGrade()
{
	std::cout << "			Test : decreasing Bureaucrate Grade To an invalid Grade" << std::endl;
	Bureaucrat	Brc("Tid", 149);
	std::cout << Brc;
	Brc.decreaseGrade();
	std::cout << Brc;
	Brc.decreaseGrade();
	std::cout << Brc;
}

int main()
{
	try{
		create_Bureaucrate(TooLowGrade);
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caughted : ";
		std::cerr << e.what() << "\n" << std::endl;
	}
	try{
		create_Bureaucrate(TooHighGrade);
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caughted : ";
		std::cerr << e.what() << "\n" << std::endl;
	}
	try {
		increaseGrade();
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caughted : ";
		std::cerr << e.what() << "\n" << std::endl;
	}
	try {
		decreaseGrade();
	} catch ( std::exception& e ) {
		std::cerr << "Exception Has Been Caughted : ";
		std::cerr << e.what() << std::endl;
	}
}