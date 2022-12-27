/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:29:38 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:29:40 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), mTarget("home")
{
	std::cout << "RobotomyRequestForm Has Been Created by The Default Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45),  mTarget(target)
{
	std::cout << "RobotomyRequestForm Has Been Created by The Parameterized Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& obj )
{
	std::cout << "RobotomyRequestForm Has Been Created by The Copy Constructor" << std::endl;
	*this = obj;
}

RobotomyRequestForm&	RobotomyRequestForm::operator = ( const RobotomyRequestForm& rhs )
{
	if (this != &rhs)
		this->mTarget = rhs.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Has Been Destroyed" << std::endl;
}

std::string	RobotomyRequestForm::getTarget( void ) const
{
	return (this->mTarget);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getStatus() == false)
		throw AForm::FormNotSignedException("the form is not signed");
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException("the grade is too low to execute the form");
	std::cout << "Bla Bla Bla ..." << std::endl;
	srand(time(NULL));
	int	random_number = rand();
	if ((random_number % 2) == 0)
		std::cout << this->mTarget << " has been robotomized" << std::endl;
	else
		std::cout << "robotomy failed" << std::endl;

}