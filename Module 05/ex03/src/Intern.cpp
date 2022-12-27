/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 05:17:06 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 17:34:08 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern()
{
	std::cout << "Intern Has Been Created by The Default Constructor" << std::endl;
}

Intern::Intern( const Intern& obj )
{
	std::cout << "Intern Has Been Created by The Copy Constructor" << std::endl;
	*this = obj;
}

Intern&	Intern::operator = ( const Intern& rhs )
{
	(void)rhs;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern Has Been Destroyed" << std::endl;
}

AForm*	Intern::makeForm(std::string formName, std::string target) const
{
	std::string	availbleForms[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	funcptr		fptr[3] = {&Intern::createPPF, &Intern::createSCF, &Intern::createRRF};

	for (int index = 0; index < 3; index++)
		if (availbleForms[index].compare(formName) == 0)
			return (this->*fptr[index])(target);
	throw std::invalid_argument("the form does not available");
}

AForm*	Intern::createPPF(std::string target) const
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::createSCF(std::string target) const
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::createRRF(std::string target) const
{
	return (new RobotomyRequestForm(target));
}