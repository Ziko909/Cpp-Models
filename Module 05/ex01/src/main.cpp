/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 04:11:42 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 19:31:05 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

void	create_Form(int grade)
{
	if (grade == TooLowGrade)
	{
		std::cout << "			Test : instantiate a Form with Too Low Grade : " << std::endl;
		Form	form1("form1", grade, 49);
	}
	else
	{
		std::cout << "			Test : instantiate a Form with Too High Grade : " << std::endl;
		Form	form2("form2", 13, grade);
	}
}

void	sign_Form()
{
	std::cout << "			Test : Sign Form" << std::endl;
	Bureaucrat	Tim("tim", 91);
	Form		form3("form3", 90, 14);
	std::cout << Tim << std::endl;
	std::cout << "Form : "<< form3 << std::endl;
	Tim.signForm(form3);
	std::cout << form3 << std::endl;
	Tim.increaseGrade();
	std::cout << Tim << std::endl;
	Tim.signForm(form3);
	std::cout << form3 << std::endl;
}

int main (void)
{
	try {
		create_Form(TooLowGrade);
	} catch (std::exception& e) {
		std::cerr << "exception caught in tha main() : "
			<< e.what() << "\n" << std::endl;
	}
	try {
		create_Form(TooHighGrade);
	} catch (std::exception& e) {
		std::cerr << "exception caught in tha main() : "
			<< e.what() << "\n" << std::endl;
	}
	sign_Form();
}