#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : mName("none") , mGrade(mLowestGrade)
{
	std::cout << "Bureaucrat Has Been Created by The Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : mName(name)
{
	if (grade > mLowestGrade)
		throw GradeTooLowException();
	if (grade < mHighestGrade)
		throw GradeTooHighException();
	this->mGrade = grade;
	std::cout << "Bureaucrat Has Been Created by The Parameterized Constructor" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const& obj )
{
	std::cout << "Bureaucrat Has Been Created by The Copy Constructor" << std::endl;
	if (this != &obj)
		*this = obj;
}

Bureaucrat&	Bureaucrat::operator = ( const Bureaucrat &rhs )
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
int	Bureaucrat::getGrade() const
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
	out << Brc.getName() << ", bureaucrat grade " << Brc.getGrade() << std::endl;
	return (out);
}