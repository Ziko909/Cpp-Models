/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 04:11:42 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 19:21:35 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>


void	execute_form(AForm *form)
{
	std::cout << "            Test : " << form->getName() << std::endl;
	Bureaucrat	tim("Tim", 1);
	std::cout << *form << std::endl;
	std::cout << tim  << std::endl;
	tim.signForm(*form);
	tim.executeForm(*form);
}

int main()
{
	Intern	intern;
	AForm	*form;
	std::cout << std::endl;
	try {
		form = intern.makeForm("shrubbery creation", "home");
		execute_form(form);
		delete form;
		std::cout << std::endl;
	} catch (std::exception& e) {
		std::cerr << "exception has been caught in :" << e.what() << std::endl;
	}
	try {
		form = intern.makeForm("robotomy request", "home");
		execute_form(form);
		delete form;
		std::cout << std::endl;
	} catch (std::exception& e) {
		std::cerr << "exception has been caught in :" << e.what() << std::endl;
	}
	try {
		form = intern.makeForm("presidential pardon", "home");
		execute_form(form);
		delete form;
		std::cout << std::endl;
	} catch (std::exception& e) {
		std::cerr << "exception has been caught in :" << e.what() << std::endl;
	}
	try {
		form = intern.makeForm(" unvalid ", "home");
		execute_form(form);
		delete form;
		std::cout << std::endl;
	} catch (std::exception& e) {
		std::cerr << "exception has been caught in :" << e.what() << std::endl;
	}
}
