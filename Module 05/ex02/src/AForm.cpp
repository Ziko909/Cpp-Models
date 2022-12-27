/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 15:14:11 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 17:39:07 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm() : mName("simple"), mStatus(false), mSignGrade(150), mExecGrade(150) 
{
	std::cout << "Form Has Been Created by The Default Constructor" << std::endl;
}

AForm::AForm(std::string name, unsigned int signGrade, unsigned int execGrade) : mName(name), mStatus(false), mSignGrade(signGrade), mExecGrade(execGrade) 
{
	std::cout << "Form Has Been Created by The Parameterized Constructor" << std::endl;
}

AForm::AForm( const AForm& obj ) : mName(obj.getName()), mStatus(false), mSignGrade(obj.getSignGrade()), mExecGrade(obj.getExecGrade())
{
	std::cout << "Form Has Been Created by The Copy Constructor" << std::endl;
}

AForm&	AForm::operator = ( const AForm& rhs )
{
	if (this != &rhs)
		this->mStatus = rhs.getStatus();
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Form Has Been Destroyed" << std::endl;
}

std::string	AForm::getName( void ) const
{
	return (this->mName);
}

bool	AForm::getStatus( void ) const
{
	return (this->mStatus);
}

unsigned int	AForm::getSignGrade( void ) const
{
	return(this->mSignGrade);
}
unsigned int	AForm::getExecGrade( void ) const
{
	return (this->mExecGrade);
}

void	AForm::beSigned( const Bureaucrat& brc )
{
	if (brc.getGrade() <= this->mSignGrade)
		this->mStatus = true;
	else
		throw GradeTooLowException("the grade is too low to sign the form");
}

AForm::FormNotSignedException::FormNotSignedException( std::string msg ) : mMsg(msg) {}

const char* AForm::FormNotSignedException::what( void ) const throw() 
{
	return (this->mMsg.c_str());
}

AForm::FormNotSignedException::~FormNotSignedException() throw() {}

AForm::GradeTooLowException::GradeTooLowException( std::string msg ) : mMsg(msg) {}

const char* AForm::GradeTooLowException::what( void ) const throw() 
{
	return (this->mMsg.c_str());
}

AForm::GradeTooLowException::~GradeTooLowException() throw() {}

std::ostream&	operator << ( std::ostream& out, const AForm& form )
{
	std::string	status[2] = {"not signed", "signed"};

	out << "Name : " << form.getName() << " | Status "
		<< status[form.getStatus()] << " | Sign Grade " << form.getSignGrade()
		<< " | Execution Grade " << form.getExecGrade();
	return (out);
}