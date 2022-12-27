/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:29:44 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:29:46 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), mTarget("some one")
{
	std::cout << "PresidentialPardonForm Has Been Created by The Default Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5),  mTarget(target)
{
	std::cout << "PresidentialPardonForm Has Been Created by The Parameterized Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj )
{
	std::cout << "PresidentialPardonForm Has Been Created by The Copy Constructor" << std::endl;
	*this = obj;
}

PresidentialPardonForm&	PresidentialPardonForm::operator = ( const PresidentialPardonForm& rhs )
{
	if (this != &rhs)
		this->mTarget = rhs.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Has Been Destroyed" << std::endl;
}

std::string	PresidentialPardonForm::getTarget( void ) const
{
	return (this->mTarget);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getStatus() != true)
		throw AForm::FormNotSignedException("the form is not signed");
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException("the grade is too low to execute the form");
	std::cout << this->mTarget << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}