/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:14:11 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/26 19:49:45 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() : mName("simple"), mStatus(false), mSignGrade(150), mExecGrade(150) 
{
	std::cout << "Form Has Been Created by The Default Constructor" << std::endl;
}

Form::Form(std::string name, unsigned int signGrade, unsigned int execGrade) : mName(name), mStatus(false), mSignGrade(signGrade), mExecGrade(execGrade) 
{
	if (signGrade > mLowestGrade || execGrade > mLowestGrade)
		throw GradeTooLowException("Can't Create Form with too low grade");
	if (signGrade < mHighestGrade || execGrade < mHighestGrade)
		throw GradeTooHighException("Can't Create Form with too high grade");
	std::cout << "Form Has Been Created by The Parameterized Constructor" << std::endl;
}

Form::Form( const Form& obj ) : mName(obj.getName()), mSignGrade(obj.getSignGrade()), mExecGrade(obj.getExecGrade())
{
	std::cout << "Form Has Been Created by The Copy Constructor" << std::endl;
}

Form&	Form::operator = ( const Form& rhs )
{
	if (this != &rhs)
		this->mStatus = rhs.getStatus();
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Has Been Destroyed" << std::endl;
}

std::string	Form::getName( void ) const
{
	return (this->mName);
}

bool	Form::getStatus( void ) const
{
	return (this->mStatus);
}

unsigned int	Form::getSignGrade( void ) const
{
	return(this->mSignGrade);
}
unsigned int	Form::getExecGrade( void ) const
{
	return (this->mExecGrade);
}

void	Form::beSigned( const Bureaucrat& brc )
{
	if (brc.getGrade() <= this->mSignGrade)
		this->mStatus = true;
	else
		throw GradeTooLowException("the grade is too low to sign the form");
}

Form::GradeTooHighException::GradeTooHighException( std::string msg ) : mMsg(msg) {}

const char* Form::GradeTooHighException::what( void ) const throw() 
{
	return (this->mMsg.c_str());
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooLowException::GradeTooLowException( std::string msg ) : mMsg(msg) {}

const char* Form::GradeTooLowException::what( void ) const throw() 
{
	return (this->mMsg.c_str());
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

std::ostream&	operator << ( std::ostream& out, const Form& form )
{
	std::string	status[2] = {"not signed", "signed"};

	out << "Name : " << form.getName() << " | Status "
		<< status[form.getStatus()] << " | Sign Grade " << form.getSignGrade()
		<< " | Execution Grade " << form.getExecGrade();
	return (out);
}