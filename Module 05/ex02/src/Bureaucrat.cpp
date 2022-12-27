/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:56:37 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:24:16 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

Bureaucrat::Bureaucrat() : mName("none") , mGrade(mLowestGrade)
{
	std::cout << "Bureaucrat Has Been Created by The Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : mName(name)
{
	if (grade > mLowestGrade)
		throw GradeTooLowException();
	if (grade < mHighestGrade)
		throw GradeTooHighException();
	this->mGrade = grade;
	std::cout << "Bureaucrat Has Been Created by The Parameterized Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj ) : mName(obj.getName())
{
	std::cout << "Bureaucrat Has Been Created by The Copy Constructor" << std::endl;
	*this = obj;
}

Bureaucrat&	Bureaucrat::operator = ( const Bureaucrat& rhs )
{
	if (this != &rhs)
		this->mGrade = rhs.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Has Been Destroyed" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (this->mName);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->mGrade);
}

void	Bureaucrat::increaseGrade()
{
	std::cout << "increaseGrade member Function Called" << std::endl;
	if (--this->mGrade < mHighestGrade)
		throw GradeTooHighException();
	
}

void	Bureaucrat::decreaseGrade()
{
	std::cout << "decreaseGrade member Function Called" << std::endl;
	if (++this->mGrade > mLowestGrade)
		throw GradeTooLowException();

}

void	Bureaucrat::signForm( AForm& form ) const
{
	try {
		form.beSigned(*this);
		std::cout << this->mName << " signed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm( AForm const & form )
{
	try {
		form.execute(*this);
		std::cout << this->mName << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : mMsg("Grade Is Too High Allowed-Range<1--150>") {}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return (this->mMsg.c_str());
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException() : mMsg("Grade Is Too Low Allowed-Range<1--150>") {}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return (this->mMsg.c_str());
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

std::ostream&	operator << (std::ostream& out, const Bureaucrat& Brc)
{
	out << Brc.getName() << ", bureaucrat grade " << Brc.getGrade();
	return (out);
}