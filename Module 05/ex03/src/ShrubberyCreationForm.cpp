/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:29:31 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:29:33 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), mTarget("home")
{
	std::cout << "ShrubberyCreationForm Has Been Created by The Default Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137),  mTarget(target)
{
	std::cout << "ShrubberyCreationForm Has Been Created by The Parameterized Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& obj )
{
	std::cout << "ShrubberyCreationForm Has Been Created by The Copy Constructor" << std::endl;
	*this = obj;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = ( const ShrubberyCreationForm& rhs )
{
	if (this != &rhs)
		this->mTarget = rhs.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Has Been Destroyed" << std::endl;
}

std::string	ShrubberyCreationForm::getTarget( void ) const
{
	return (this->mTarget);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getStatus() == false)
		throw AForm::FormNotSignedException("the form is not signed");
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException("the grade is too low to execute the form");
	std::ofstream	target_file(this->mTarget + "_shrubbery");
	if (target_file.is_open() == true)
		target_file << AsciiTree << std::endl;
	else
		std::cerr << "can't open the file" << std::endl;
}